#include<stdio.h>

void main()
{
    int f,i,N,cus[100000],top=-1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&f);
        if(f==1)
        {
            if(top<0)
            printf("No food\n");
            else
            {
                printf("%d\n",cus[top]);
                top--;
            }
        }
        else
        {
            scanf("%d",&cus[++top]);
        }
    }
}