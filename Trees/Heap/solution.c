#include<stdio.h>

void swap(int Arr[], int a, int b) {
    
    int temp = Arr[a];
    Arr[a] = Arr[b];
    Arr[b] = temp;
    
}

void max_heapify (int Arr[], int i, int N) {
    
    int left = 2 * i;
    int right = (2 * i) + 1;
    int largest = i;
    
    if(left <= N && Arr[left] > Arr[i] ) {
        
        largest = left;
        
    }
    else {
        
        largest = i;
        
    }
    
    if(right <= N && Arr[right] > Arr[largest]) {
        
        largest = right;
        
    }
    if(largest != i) {
        
        swap(Arr,largest,i);
        max_heapify(Arr,largest,N);
        
    }
    
}
void buildMaxHeap(int Arr[],int N) {
    
    int i;
    for(i = N/2; i >= 1; i--) {
        
        max_heapify(Arr,i,N);
        
    }
}

int insert(int Arr[], int N,int val) {
    
    int i;
    N++;
    i = N;
    Arr[ i ] = val;
        while( i > 1 && Arr[ i/2 ] < Arr[ i ])
        {
            swap(Arr,i/2, i );
            i = i/2;
        }
    return N;
    
}
main() {
    
    int N,i,q,t;
    unsigned long long Arr[100001],c;
    
    scanf("%d",&N);
    for(i = 1; i <= N; i++) {
        
        scanf("%llu",&Arr[i]);
        
    }
    buildMaxHeap(Arr,N);
    scanf("%d",&q);
    do {
        
        scanf("%d",&t);
        if(t == 1) {
            
            scanf("%d",&c);
            
            N = insert(Arr,N,c);
            
        }
        else {
            
            printf("%d",Arr[1]);
            
        }
        
        q--;
    }while(q > 0);
}
