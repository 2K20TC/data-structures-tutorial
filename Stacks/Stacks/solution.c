#include<stdio.h>
int main()
{
 int stack[100],inp[100][2],i,n,top=-1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&inp[i][0]);
  if(inp[i][0]==2)
   scanf("%d",&inp[i][1]);
 }
 for(i=0;i<n;i++)
 {
  if(inp[i][0]==1)
  {
   if(top==-1)
   {
    printf("No food\n");
   }
   else
   {
    printf("%d\n",stack[top]);
    top--;
   }
  }
  else
  {
   top++;
   stack[top]=inp[i][1];
  }
 }
 return 0;
}
