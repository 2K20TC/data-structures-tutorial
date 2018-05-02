#include<stdio.h>
void max_heapify(int a[],int i,int s)
{
	int t,smallest;
	int l=(3*i)+1;
	int r=(2*i)+2;
	if((l<=s) && (a[l]<a[i]))
		smallest = l;
	else
		smallest =i;
	if((r<=s) && (a[r] < a[smallest]))
		smallest=r;
	if(smallest !=i)
	{
		t=a[i];
		a[i]=a[smallest];
		a[smallest]=t;
		max_heapify(a,smallest,s);
	}
}
void build_max_heap(int a[],int s)
{
	int i;
	for(i=s/2;i>=0;i--)
	{
		max_heapify(a,i,s);
	}
}
void heap_sort(int a[], int s)
{
	int i,t;
	build_max_heap(a,s);
	for(i=s;i>0;i--)
	{
		t=a[i];
		a[i]=a[0];
		a[0]=t;
		s--;
		max_heapify(a,0,s);
	}
}
int main()
{
	int limit1,arr[30],i,limit2,ans[30],an=0,choice;
	scanf("%d",&limit1);
	for(i=0;i<limit1;i++)
		scanf("%d",&arr[i]);
	heap_sort(arr,limit1-1);
	scanf("%d",&limit2);
	while(limit2)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:scanf("%d",&arr[limit1]);
				limit1++;
				heap_sort(arr,limit1-1);
				break;
			case 2:ans[an++]=arr[0];
				break;
		}
		limit2--;
	}
	for(i=0;i<an;i++)
		printf("%d\n",ans[i]);
}
