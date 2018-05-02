#include<stdio.h>
#include<stdlib.h>
int main()
{
 int **a,i,j,m,n;
 scanf("%d %d",&m,&n);
 a=(int**)malloc(m*sizeof(int*));
 for(i=0;i<m;i++)
 {
  a[i]=(int*)malloc(n*sizeof(int));
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   printf("%d ",a[j][i]);
  printf("\n");
 }
 return 0;
}
