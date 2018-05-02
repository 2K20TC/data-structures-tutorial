#include<stdio.h>
int main()
{
	int roll,limit,i=0,ans[100],j;
	char name[100],hash[100][100];
	scanf("%d",&limit);
	while(limit>i)
	{
		scanf("%d %s%*c",&roll,name);
		for(j=0;name[j]!='\0';j++)
			hash[roll][j]=name[j];
		i++;
	}
	scanf("%d",&limit);
	i=0;
	while(limit>i)
	{
		scanf("%d",&ans[i]);
		i++;
	}
	for(i=0;i<limit;i++)
		printf("%s\n",hash[ans[i]]);
}
