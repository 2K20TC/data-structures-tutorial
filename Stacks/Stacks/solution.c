#include<stdio.h>

int top = -1;
unsigned long long stk[100000];

void push(unsigned long long c) {
    
    if( top <= 100000 ) {
        
        stk[++top] = c;
        
    }
    
}

unsigned long long pop() {
    
    if( top < 0 ){
        
        return 0;
        
    }
    else {
        
        return stk[top--];
        
    }
    
}

int main() {
    
    int Q,q;
    unsigned long long c,p;
    
    scanf("%d",&Q);
    
    do {
        
        scanf("%d",&q);
        
        if(q == 1) {
            
            p = pop();
            
            if( p == 0) {
                
                printf("No food\n");
                
            }
            else {
                
                	printf("%llu\n",p);
            
            }
            
        }
        else {
            
            scanf("%llu",&p);
            
            push(p);
            
        }
        
        Q--;
        
    }while(Q > 0);
    
    
    
}
