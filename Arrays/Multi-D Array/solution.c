#include<stdio.h>
main()
{
    int n,i,m,j,a[10][10];

    scanf("%d%d",&n,&m);
    for(i=0;i<n;++i)
     for(j=0;j<m;++j)
       scanf("%d",&a[i][j]);
    for(i=0;i<m;++i)
    {

     
     for(j=0;j<n;++j)
    printf("%d ",a[j][i]);
     printf("\n");   
}}
