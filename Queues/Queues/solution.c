#include<stdio.h>

#include<stdlib.h>

int front = -1, rear = -1;

int Q[100] , N, ar[2];

int isFull(Q) {
    
    if(rear > 100) {
        
        return 1;
        
    }
    else {
        
        return 0;
        
    }
    
}

int isMT(Q) {
    
    if(front > rear || front == -1) {
        
        return 1;
        
    }
    else {
        
        return 0;
        
    }
    
}

int size(Q) {
    
    if(front == -1 || rear == -1) {
        
        return 0;
        
    }
    
    else {
        
        return (rear - front + 1);
        
    }
    
}

int enq(int n) {

    if(!isFull(Q)){
        
        Q[++rear] = n; 
        
        if(isMT(Q)) {
            
            ++front;
            
        }
        
    }
    
    return size(Q);
    
}

void dq() {
    
    if(isMT(Q)) {
        
        ar[0] = 1;
        
        ar[1] = 0;
        
    }
    
    else {
        
        ar[0] = Q[front];
        
        ++front;
        
        ar[1] = size(Q);
        
    }
    
}


int main() {
    
    int i , x;
    
    char p;
    
    scanf("%d",&N);
    
    do {
        
        scanf("\n%c",&p);
        
        if( p == 'E' ) {

            scanf("%d",&x);
            
            i = enq(x);
            
            printf("%d\n",i);
            
        }
        
        else if( p == 'D' ) {
            
            dq();
            
            printf("%d %d\n",ar[0],ar[1]);
            
        }
        
        N--;
        
    }while (N > 0);
    
}
