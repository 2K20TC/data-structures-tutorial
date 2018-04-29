#include<stdio.h>
void main()
{
    int j,i,m,n,A[10][10],B[10][10];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    B[j][i]=A[i][j];
    

    for(i=0;i<n;i++)
    {   for(j=1,printf("%d",B[i][0]);j<m;j++)
        printf(" %d",B[i][j]);
        printf("\n");
    }
}