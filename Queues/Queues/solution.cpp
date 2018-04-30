#include <iostream>
using namespace std;

int main()
{
int n,count = 0,x,front=0,rear=0;
char ch;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
{
cin>>ch;
if(ch=='E')
{
cin>>x;
a[rear]=x;
rear++;
count++;
cout<<count<<endl;
}
else if(ch=='D')
{
if(front==rear)
{
cout<<"-1 "<<count<<endl;
}
else
{
count--;
cout<<a[front]<<" "<<count<<endl;
a[front]=0;
front++;
}
}
}
return 0;
}
