#include<stdio.h>

int main() {
	int mat[1000][1000], m, n, i, j;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++) 
        for(j=0;j<m;j++)
		scanf("%d", &mat[i][j]);
	for( i=0 ; i<m ; i++)
    for(j=0;j<n;j++)
    {
        if(j+1<n){
                printf("%d ", mat[j][i]);
        }    
        else {
            printf("%d\n", mat[j][i]);
        }
    }
	return 0;
}