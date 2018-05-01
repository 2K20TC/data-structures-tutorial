#include<stdio.h>
void main()
{
  int N,i,*A;
  scanf("%d",N);
  A=(int *)malloc(N*sizeof(int));
  for(i=0;i<N;i++)
    scanf("%d",&A[i]);
   for(i=N-1;i>=0;i--)
    printf("%d\n",A[i]);
   free(A);
}
