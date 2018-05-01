#include<stdio.h>

int main() {
    
    int N,M,A[10][10],i,j;
    
    scanf("%d %d",&N,&M);
    
    
    for( i = 0 ; i < N ; i++ ) {
        
        for ( j = 0 ; j < M ; j++ ) {
        
            scanf("%d",&A[i][j]);
        }
        
    }
    
    for( i = 0 ; i < M ; i++ ) {
        
        for ( j = 0; j < N ; j++ ) {
        
            printf("%d",A[j][i]);

	    if ( j != N-1) {

		printf(" ");

            }
        
        }
        
        printf("\n");
        
    }
    
}

