#include<stdio.h>
void main()
{
    int N,i,A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    while((--N)+1)
        printf("%d\n",A[N]);
}