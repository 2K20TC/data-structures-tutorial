#include<stdio.h>

int main() {
    int n, i, item, queue[10000], size=-1, j;
    char ch;
    scanf("%d", &n);
    for(i=0; i<n ;i++){
        scanf(" %c", &ch);
        switch(ch) {
            case 'E':   scanf("%d", &item);
                        queue[++size] = item;
                        printf("%d\n", size+1);
                        break;
            case 'D':   if(size >= 0) {
                            item = queue[0];
                            size--;
                            for(j=0;j<=size; j++) queue[j] = queue[j+1];
                        }
                        else item = 1;
                        printf("%d %d\n", item, size+1);
                        break;
        }
    }
}