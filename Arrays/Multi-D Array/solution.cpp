#include<iostream>
using namespace std;

int main()
{
	int num, r,c;
	int arr[100][100];
	cin>>r>>c;

	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			cin>>arr[x][y];
		}
	}

	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			cout<<arr[y][x]<<"\n";
		}cout<<"\n";
	}

	return 0;
}
