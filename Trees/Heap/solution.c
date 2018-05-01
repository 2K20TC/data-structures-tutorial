#include<stdio.h>

void swap(int arr[],int m,int n)
{
	int temp;
	temp = arr[m];
	arr[m] = arr[n];
	arr[n] = temp;
}

void heapify(int arr[],int n,int i)
{
	int max = i;
	int left = (2*i)+1;
	int right = (2*i)+2;
	
	if(left<n && arr[left]>arr[max])
		max = left;
	if(right<n && arr[right]>arr[max])
		max = right;
	
	if(max!=i)
	{
		swap(arr,max,i);
		heapify(arr,n,max);
	}
}

void heapsort(int arr[],int n)
{
	int i;
	for(i=n/2 -1;i>=0;i--)
		heapify(arr,n,i);
	for(i=n-1;i>=0;i--)
	{
		swap(arr,0,i);
		heapify(arr,i,0);
	}
}

/*void output(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}*/

int main()
{
	int i,n,k,arr[100000],q;
		//printf("Enter array elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			//printf("\narr[%d]: ",i);
			scanf("%d",&arr[i]);
		}
		heapsort(arr,n);
		scanf("%d",&q);
		do {
		scanf("%d",&i);
		    if( i == 1) {

		        scanf("%d",&arr[n++]);
		        heapsort(arr,n);

		    }
		    else if( i == 2 ) {
		        
		        printf("%d\n",arr[n-1]);

		    }
		    q--;
	    }while(q > 0);
}
