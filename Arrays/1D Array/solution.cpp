#include<iostream>
using namespace std;

int main()
{
	int num,idx;
	int arr[10];

	cin>>num;
	for(idx=0;idx<num;idx++)
		cin>>arr[idx];

	for(idx=num-1;idx>=0;idx--)
		cout<<arr[idx]<<"\n";

	return 0;
}
