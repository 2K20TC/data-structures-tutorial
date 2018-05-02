#include<stdio.h>
int main()
{
	int arr[100][100],m,n,i,j;
	scanf("%d  %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",arr[j][i]);
		printf("\n");
	}
}
