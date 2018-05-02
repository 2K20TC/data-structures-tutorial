#include<iostream>
using namespace std;
# define MAX 10000

int main()
{
	int n,i,j,roll[MAX],inp,q;
	char name[MAX][30];

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>roll[i]>>name[i];
	}
	cin>>inp;
	for(i=0;i<inp;i++){
		cin>>q;
		for(j=0;j<MAX;j++){
		if(q ==roll[j]){
			cout<<name[j]<<"\n";
		}			
		}
		// cout<<name[q];
	}
}
