#include<stdio.h>
struct line
{
 char ch;
 int x;
};
int main()
{
 struct line l[100];
 int q[100],i,n,r=-1,f=-1,size=0,x;
 scanf("%d%*c",&n);
 for(i=0;i<n;i++)
 {
  scanf("%c",&l[i].ch);
  if(l[i].ch=='E')
  {
   scanf("%*c%d",&l[i].x);
  }
  scanf("%*c");
 }
 for(i=0;i<n;i++)
 {
  if(l[i].ch=='E')
  {
   size++;
   if(r==-1)
   {
    f=r=0;
    q[r]=l[i].x;
   }
   else
   {
    r=(r+1)%100;
    q[r]=l[i].x;
   }
   printf("%d\n",size);
  }
  else if(l[i].ch=='D')
  {
   if(size==0)
   {
    printf("1 0\n");
   }
   else
   {
    size--;
    if(f==r)
    {
     x=q[f];
     f=r=-1;
    }
    else
    {
     x=q[f];
     f=(f+1)%100;
    }
    printf("%d %d\n",x,size);
   }
  }
 }
 return 0;
}
