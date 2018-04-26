#include<stdio.h>
int main()
{
	int op,size=0,arr[40],ans[50][50],cas=0,i,j;
	char op2;
	scanf("%d\n",&op);
	while(cas<op)
	{
		scanf("%c",&op2);
		switch(op2)
		{
			case 'E':size++;
				scanf("%d",&arr[size]);
				ans[cas][0]=size;
				ans[cas][1]=-1;
				break;
			case 'D':if(size==0)
				{
					ans[cas][0]=1;
					ans[cas][1]=0;
				}
				else
				{
					ans[cas][0]=arr[size--];
					ans[cas][1]=size;
				}
				break;
			default:printf("error");
		}
		scanf("%*c");
		cas++;
	}
	for(i=0;i<op;i++)
	{
		if(ans[i][1]==-1)
			printf("%d",ans[i][0]);
		else
			printf("%d %d",ans[i][0],ans[i][1]);
		printf("\n");
	}
}
