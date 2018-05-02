#include<stdio.h>
 main()
{
	int roll,n,i=0,ans[100],j;
	char name[100],hash[100][100];
	scanf("%d",&n);
	while(n>i)
	{
		scanf("%d %s%*c",&roll,name);
		for(j=0;name[j]!='\0';j++)
			hash[roll][j]=name[j];
		i++;
	}
	scanf("%d",&n);
	i=0;
	while(n>i)
	{
		scanf("%d",&ans[i]);
		i++;
	}
	for(i=0;i<n;i++)
	printf("%s\n",hash[ans[i]]);
}
