#include<stdio.h>
main()
{
    int N,A[100],i,type,q,a,b,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
         scanf("%d",&A[i]);
     scanf("%d",&q);
     while(q>0)
     {
         scanf("%d",&a);
         if(a==1)
            {   scanf("%d",&b);
                for(j=0;j<N;j++);
                    A[j]=b;
                    N++;
            }
        if(a==2)
          {     int large=A[0];
                for(j=1;j<N;j++)
                   {
                       if(A[j]>large)
                          large=A[j];
                   }
                 printf("%d\n",large);
          }
        q--;
     }
}
