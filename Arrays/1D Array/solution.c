#include <stdio.h>

int main(){
	int num,arr[100],i;
	 scanf("%d",&num);
	for(i=0;i<num;i++)
	       scanf("%d",&arr[i]);// Reading input from STDIN
	for(i=num-1;i>=0;i--)
	       printf("%d\n",arr[i]);// Writing output to STDOUT
}

