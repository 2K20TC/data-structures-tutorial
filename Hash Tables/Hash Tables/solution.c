#include<stdio.h>
#include<stdlib.h>
struct Student
{
     int roll;
     char name[25]
};
void main()
{
    int q,i,r,N,N1,j;
    char nam[25];
    scanf("%d",&N);
    struct Student *ptr = (struct Student*) malloc (N * sizeof(struct Student));
    for(i=0;i<N;i++)
    scanf("%d %s",&(ptr+i)->roll,&(ptr+i)->name);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&N1);
        for(j=0;j<N;j++)
        {
        if ((ptr+j)->roll==N1)
         {   printf("%s\n",(ptr+j)->name);
                break;
         }
        }
    }
}