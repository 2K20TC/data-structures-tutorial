#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *l;
	struct node *r;
};
int main()
{
	struct node *p,*t1,*t2,*head;
	int limit,i,count=0;
	char str[20];
	head=(struct node *)malloc(sizeof(struct node));
	scanf("%d %d",&limit,&(head->data));
	head->l=NULL;
	head->r=NULL;
	while(limit>1)
	{
		t2=head;
		p=(struct node *)malloc(sizeof(struct node));
		p->l=NULL;
		p->r=NULL;
		scanf("%s",str);
		scanf("%d",&(p->data));
		for(i=0;str[i]!='\0';i++)
			if(str[i]=='L' && str[i+1]=='\0')
			{
				t2->l=p;
				break;
			}
			else if(str[i]=='R' &&str[i+1]=='\0')
			{
				t2->r=p;
				break;
			}
			else if(str[i]=='R')
				t2=t2->r;
			else if(str[i]=='L')
				t2=t2->l;
		limit--;
	}
	t2=head;
	while(t2!=NULL)
	{
		count++;
		t2=t2->l;
	}
	t2=head;
	while(t2!=NULL)
	{
		count++;
		t2=t2->r;
	}
	printf("%d",count-1);
}
