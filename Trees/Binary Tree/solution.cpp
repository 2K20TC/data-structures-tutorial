#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,l;
cin>>n>>k;
string a[20];

for(int i=0;i<n-1;i++)
{
cin>>a[i]>>l;
}
int count = 0;
for(int i=0;i<n-1;i++)
for(int j=0;j<n-1;j++)
for(int u=0;u<a[i].length()&&u<a[j].length();u++)
{
if(i == j)
break;
if( a[i][u] == a[j][u])
continue;
else 
{
if(count < (a[i].length()+a[j].length()-2*u + 1) )
{	
count = a[i].length()+a[j].length()-2*u + 1;

}
break;
}

}
cout<<count<<endl;
return 0;
}
