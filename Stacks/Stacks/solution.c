/*lude<stdio.h>
int top=-1,val,stack[100];
int ch,n,i;
void pop()
{
top=top-1;
}
void push(int stack[],int val)
{
top=top+1;
stack[top]=val;
}
void main()
{
 scanf("%d",&n);
 for(i=0;i<n;i++)
  { 
    scanf("%d",&ch);
    if(ch==1)
     {
      if(top==0)
         printf("\nNo food");
      else
       {
        printf("%d\n",stack[top]);
        pop();
        }
     }
   if(ch==2)
    {
     if(top!=99)
       {
         scanf("%d",&val);
         push(stack,val);
        }
   }
  
  }
}
*/
#include <stdio.h>
#include <math.h>
int top=-1;
void pop()
{
top=top-1;
}
void push(int stack[],int val)
{
top=top+1;
stack[top]=val;
}
int main()
{
int n,a,b,val,max;
scanf("%d",&n);
max=n;
int stack[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a);
if(a==1)
{
if(top==-1)
{
printf("No food\n");
}
else
{
printf("%d\n",stack[top]);
pop();
}
}
else
{
if(top!=max-1)
{
scanf("%d",&val);
push(stack,val);
}
}

}
return 0;
}
