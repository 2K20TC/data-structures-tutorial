#include<stdio.h>
int main()
{
	int i,j,ans[40],cas=0,stack[100],size=-1,op,op2;
	scanf("%d",&op);
	while(cas<op)
	{
		scanf("%d",&op2);
		switch(op2)
		{
			case 1:if(size==-1)
					ans[cas]=-1;
				else
				{
					ans[cas]=stack[size];
					size--;
				}
				break;
			case 2:	size++;
				scanf(" %d",&stack[size]);
				ans[cas]=-2;
				break;
			default:printf("error");
		}
		scanf("%*c");
		cas++;
	}
	for(i=0;i<op;i++)
		if(ans[i]==-1)
			printf("\nNo food");
		else if (ans[i]==-2)
			continue;
		else
			printf("\n%d",ans[i]);
}
