/*#include<stdio.h>
void main()
{
int i,r,c,j,arr[10][10];
scanf("%d %d ",&r,&c);
for(i=0;i<r;i++)
   for(j=0;j<c;j++)
       scanf("%d",&arr[i][j]);
for(i=0;i<c;i++)
  { for(j=0;j<r;j++)
       {printf("%d ",arr[j][i]);
       }
    printf("\n");
  }

}
*/
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
