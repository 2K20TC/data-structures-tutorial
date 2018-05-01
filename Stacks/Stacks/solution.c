#include <stdio.h>
#include <malloc.h>

struct stack
{
	int cost;
	struct stack *next;
}*head;

void customer()
{
	struct stack *node, *parent;

	node = head;

	if(node == 0)
	{
		printf("No food\n");
	}
	else
	{
		while(node->next)
		{
			parent = node;
			node = node->next;
		}

		printf("%d\n", node->cost);
		parent->next = 0;
		free(node);
	}

}

void chef(int expense)
{
	struct stack *node, *new_node;

	node = head;
	new_node = (struct stack *)malloc(sizeof(struct stack));

	if(node == 0)
	{
		new_node->next = 0;
		new_node->cost = expense;
		head = new_node;
	}
	else
	{
		while(node->next)
			node = node->next;
		
		node->next = new_node;
		new_node->cost = expense;
		new_node->next = 0;
	}
}

void main()
{
	int r, i, choice, expense;
	char temp;

	scanf("%d", &r);

	for(i=0;i<r;i++)
	{
		scanf("%c%d", &temp, &choice);

		if(choice==1)
			customer();
		else
		{
			scanf("%d", &expense);
			chef(expense);
		}
	}
}
