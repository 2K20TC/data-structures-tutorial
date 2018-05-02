#include<iostream>
using namespace std;
long long n;
int arr[100001];

void increase_value(int x,int i){
if(x<arr[i]){
cout<<"error\n";
return;
}
arr[i]=x;
while(i>1&&arr[i/2]<arr[i]){
swap(arr[i/2],arr[i]);
i=i/2;
}
}

void insert_heap(int x){
n=n+1;
arr[n]=-1;
increase_value(x,n);
}

int max_element(){
return arr[1];
}
void max_heapify(int i){
int left=2*i;
int right=2*i+1;
int largest;
if(left<=n&&arr[left]>arr[i]) largest=left;
else largest=i;
if(right<=n&&arr[right]>arr[largest]) largest=right;
if(largest!=i){
swap(arr[i],arr[largest]);
max_heapify(largest);
}
}
void build_maxheap(){
for(int i=n/2;i>=1;i--){
max_heapify(i);
}
}
int main(){
cin>>n;
for(int i=1;i<=n;i++){
cin>>arr[i];
}
build_maxheap();
int q,result;
cin>>q;
while(q--){
int a,b;
cin>>a;
if(a==1){cin>>b; insert_heap(b);}
else {result=max_element();
cout<<result<<"\n";}
}
return 0;
}

