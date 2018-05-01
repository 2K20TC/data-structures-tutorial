#include <stdio.h>
#include <malloc.h>

void main()
{
	int m, n, **arr, **res, *temp, i, j;

	scanf("%d%d", &n, &m);
	arr = (int **)malloc(n*sizeof(int));
	res = (int **)malloc(m*sizeof(int));

	for(i=0;i<n;i++)
	{
		arr[i] = (int *)malloc(m*sizeof(int));
		for(j=0;j<m;j++)
			scanf("%d", &arr[i][j]);
	}

	for(i=0;i<m;i++)
	{
		temp = (int *)malloc(n*sizeof(int));

		for(j=0;j<n;j++)
			temp[j] = arr[j][i];

		res[i] = temp;
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d", res[i][j]);
			if(j!=n-1)
				printf(" ");
		}
		printf("\n");
	}
}
