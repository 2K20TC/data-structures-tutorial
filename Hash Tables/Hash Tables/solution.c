#include<stdio.h>
#define MAX 100000
int main() {
    int n,i,j, ind, sno, index[MAX];
    scanf("%d", &n);
    char hash[MAX][25];
    for(i=0;i<n;i++){
        scanf("%d %s", &index[i], hash[i]);
    }
    scanf("%d", &sno);
    for(i=0;i<sno;i++){
        scanf("%d", &ind);
        for(j=0; j < MAX; j++) if(ind == index[j]) break;
        printf("%s\n", hash[j]);
    }
}