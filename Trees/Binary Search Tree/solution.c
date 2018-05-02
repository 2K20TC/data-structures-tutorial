#include<stdio.h>
#include<stdlib.h>
int flag;
struct node
{
	int data;
	struct node *l;
	struct node *r;
};
void rec2(struct node *a)
{
	if(a == NULL)
		return;
	printf("\n%d",a->data);
	rec2(a->l);
	rec2(a->r);
}
void rec(struct node *a,int flag,int num)
{
	if(a == NULL)
		return;
	if(a->data==num)
		rec2(a);
	rec(a->l,flag,num);
	rec(a->r,flag,num);
}
int main()
{
	struct node *head;
	head=NULL;
	int limit,no;
	struct node *p,*t1,*t2;
	scanf("%d",&limit);
	while(limit!=0)
	{
		t2=head;
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&(p->data));
		p->l=NULL;
		p->r=NULL;
		if(head==NULL)
			head=p;
		else
		{
			t2=head;
			while(1)
			{
				if(p->data>t2->data && t2->r!=NULL)
				{
					t2=t2->r;
				}
				else if(p->data < t2->data && t2->l!=NULL)
				{
					t2=t2->l;
				}
				else if(p->data > t2->data)
				{
					t2->r=p;
					break;
				}
				else if(p->data < t2->data)
				{
					t2->l=p;
					break;
				}
			}
		}
	limit--;
	}
	scanf("%d",&no);
	rec(head,0,no);
}
