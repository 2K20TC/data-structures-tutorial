#include <stdio.h>
#include <malloc.h>

void main()
{
	int *arr, n, i;

	scanf("%d", &n);
	arr =(int *)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=n-1;i>=0;i--)
		printf("%d\n", arr[i]);
}
