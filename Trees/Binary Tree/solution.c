#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct binary_tree
{
	int cargo;
	int allocated;
	char *r;
};

void main()
{
	int n, temp, i, j, k, curr, last, *leaves, count = 0, max = 0, length;
	char *route;
	struct binary_tree *tree;
	
	scanf("%d%d", &n, &temp);
	tree = (struct binary_tree*)malloc((n*n)*sizeof(struct binary_tree));
	leaves = (int *)malloc(n*sizeof(int));
	route = (char *)malloc(n*sizeof(char));
	tree[1].cargo = temp;
	tree[1].allocated = 1;

	for(i=2;i<n*n;i++)
		tree[i].allocated = 0;

	for(i=0;i<n-1;i++)
	{
		curr = 1;
		route = (char *)malloc(n*sizeof(char));

		scanf("%s", route);
		scanf("%d", &temp);

		for(j=0;route[j]!='\0';j++)
		{
			if(route[j]=='L')
				curr = curr*2;
			else
				curr = curr*2+1;
		}

		tree[curr].cargo = temp;
		tree[curr].allocated = 1;
		tree[curr].r = route;

		if(curr>last)
			last = curr;
	}

	for(i=last;i>1;i--)
	{
		if(tree[i].allocated == 1 && tree[i*2].allocated == 0 && tree[i*2+1].allocated == 0)
		{
			leaves[count] = i;
			count++;
		}
	}

	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			length = 1;
			k = 0;

			if(i != j)
			{
				while(tree[leaves[i]].r[k] == tree[leaves[j]].r[k])
					k++;
				while(tree[leaves[j]].r[k+length-1] != '\0')
					length++;

				while(tree[leaves[i]].r[k] != '\0')
				{
					length++;
					k++;
				}

			}
			else
				continue;
			if(length > max)
				max = length;
		}
		
	}

	printf("%d\n", max);
}
