#include <stdio.h>
#include <malloc.h>

struct bin_search
{
	int cargo;
	int allocated;
};

void main()
{
	int n, i, curr=1, temp, flag, q, last=1;
	struct bin_search *tree;

	scanf("%d", &n);
	tree = (struct bin_search *)malloc(n*n*sizeof(struct bin_search));

	for(i=0;i<n;i++)
		tree[i].allocated = 0;

	for(i=0;i<n;i++)
	{
		curr = 1;
		scanf("%d", &temp);

		if(tree[curr].allocated == 0)
		{
			tree[curr].cargo = temp;
			tree[curr].allocated = 1;
		}
		else
		{
			flag=1;
			while(flag)
			{
				if(temp>tree[curr].cargo)
				{
					curr = curr*2+1;
					if(tree[curr].allocated == 0)
					{
						tree[curr].cargo = temp;
						tree[curr].allocated = 1;
						flag = 0;
					}
				}
				else if(temp<=tree[curr].cargo)
				{
					curr = curr*2;
					if(tree[curr].allocated == 0)
					{
						tree[curr].cargo = temp;
						tree[curr].allocated = 1;
						flag = 0;
					}
				}
			}
		}
	}

	curr = 1;
	flag = 1;

	scanf("%d", &q);

	while(tree[curr].cargo == q);
	{
		if(q > tree[curr].cargo)
			curr = curr*2+1;
		else
			curr = curr*2;
	}

	last = curr;

	while(tree[last].allocated != 0)
		last = last*2+1;
	last = last/2;

	while(flag)
	{
		printf("%d\n", tree[curr].cargo);

		if(tree[curr*2].allocated != 0)
			curr = curr*2;
		else if(tree[curr*2+1].allocated != 0)
			curr = curr*2+1;
		else if(curr != last)
		{
			if(curr%2 == 0)
				curr++;
			else
				curr = curr/2+1;

			while(tree[curr].allocated == 0)
			{
				if(curr%2 == 0)
					curr++;
				else
					curr = curr/2+1;
			}
		}
		else
			flag = 0;
	}
}
