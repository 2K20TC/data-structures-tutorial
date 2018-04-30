#include<stdio.h>

main() {
    
    int N,A[100],i;
    
    scanf("%d",&N);
    
    for( i = 0 ; i < N ; i++ ) {
        
        scanf("%d",&A[i]);
        
    }
    
    for( i = N-1 ; i > -1 ; i-- ) {
        
        printf("%d\n",A[i]);
        
    }
    
}

