#include<stdio.h>
#include<malloc.h>
#define t 100000


int main() {
    
    int N,q,x,r[t],i,j;
    char name[t][25];
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++ ) {
        
        scanf("%d",&r[i]);
        
        scanf("%s",name[r[i]%N]);
        
        //printf("%s",name[i%N]);
        
    }
    
    scanf("%d",&q);
    
    for(i = 0; i < q; i++ ) {
        
        scanf("%d",&x);
        
        //printf("%d",x);
        
        printf("%s\n",name[x%N]);
        
    }
    
}
