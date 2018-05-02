#include<iostream>
using namespace std;
#define MAX 10000

int stack[MAX];
int top =-1;

void push(int x)
{
	//if(top ==n-1)
	//{
	//	cout<<"Overflow";
	//
	
		top +=1;
		stack[top]=x;
	
}

void pop()
{
	cout<<stack[top]<<"\n";
	--top;
}
   	
    int main()
{

	int in,cost;	
	int no;
	
	cin>>no;
	
	while(no>0)
	{
		cin>>in;
		//cout<<"\n";
		if(in ==1)
		{
			
			if(top!=-1)
				pop();
			else
				cout<<"No Food\n";
		}

		if(in ==2)
		{
			cin>>cost;
			push(cost);
		}
		
		no--;
	}
	return 0;
}
