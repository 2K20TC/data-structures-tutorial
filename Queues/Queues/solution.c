#include <stdio.h>
#include <malloc.h>

int size=0;

struct node
{
	int cargo;
	struct node *next;
}*head;

void enqueue(int x)
{
	struct node *new_node, *node;
	size++;

	node = head;

	if(head==0)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->cargo=x;
		head->next=0;
	}
	else
	{
		new_node = (struct node *)malloc(sizeof(struct node));
		while(node->next!= 0)
			node = node->next;
		node->next = new_node;
		new_node->cargo = x;
		new_node->next = 0;
	}

	printf("%d\n", size);
}

void dequeue()
{
	struct node *node, *parent;

	if(size>0)
		size--;

	node = head;

	if(node == 0)
	{
		printf("1 0\n");
	}
	else if(node->next == 0)
	{
		printf("%d 0\n", node->cargo);
		free(node);
		head = 0;
	}
	else
	{
		head = node->next;
		printf("%d %d\n", node->cargo, size);
		free(node);
	}
}

void main()
{
	int n, i, x;
	char choice, end;

	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		scanf("%c%c", &end, &choice);

		if(choice=='E')
		{
			scanf("%d", &x);
			enqueue(x);
		}
		else
			dequeue();
	}
}
