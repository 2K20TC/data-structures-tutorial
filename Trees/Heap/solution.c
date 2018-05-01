#include <stdio.h>
#include <malloc.h>

struct heap
{
	int cargo;
	int allocated;
};

void heapify(struct heap *, int);

void main()
{
	struct heap *h;
	int n, last=1, i, temp, q, type;

	scanf("%d", &n);
	h = (struct heap *)malloc(n*sizeof(struct heap));

	for(i=0;i<n;i++)
		h[i].allocated = 0;

	for(i=0;i<n;i++)
	{
		scanf("%d", &temp);
		h[last].cargo = temp;
		h[last].allocated = 1;
		last++;

		heapify(h, last-1);
	}

	scanf("%d", &q);

	for(i=0;i<q;i++)
	{
		scanf("%d", &type);

		if(type == 1)
		{
			scanf("%d", &temp);
			h[last].cargo = temp;
			h[last].allocated = 1;
			last++;

			heapify(h, last-1);
		}
		else
			printf("%d\n", h[1].cargo);
	}
}

void heapify(struct heap *h, int pos)
{
	int finished = 0, temp;

	while(!finished)
	{
		if(h[pos/2].cargo < h[pos].cargo && pos/2 != 0)
		{
			temp = h[pos].cargo;
			h[pos].cargo = h[pos/2].cargo;
			h[pos/2].cargo = temp;
			pos = pos/2;
		}
		else
			finished = 1;
	}
}
