#include<stdio.h>

int main() {
    int n, i, item, stack[10000], size=-1, j, ch;
    scanf("%d", &n);
    for(i=0; i<n ;i++){
        scanf("%d", &ch);
        switch(ch) {
            case 2:     scanf("%d", &item);
                        stack[++size] = item;
                        break;
            case 1:     if(size >= 0) item = stack[size--];
                        else item = -1;
                        if(item > 0) printf("%d\n", item);
                        else printf("No Food\n");
                        break;
        }
    }
}