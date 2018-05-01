#include <stdio.h>
int main()
{
int Q[100],front,rear,x,size;
int N;
char T;
front=rear=0;
scanf("%d",&N);
while(N--)
{
scanf(" %c",&T);
if(T=='E')
{
scanf("%d",&x);
Q[rear]=x;
rear++;
size=rear-front;
printf("%d\n",size);
}
else if(T=='D')
{
if(front==rear)
printf("1 ");
else
{
printf("%d ",Q[front]);
Q[front]=0;
front++;}
size=rear-front;
printf("%d\n",size);

}
}
}
