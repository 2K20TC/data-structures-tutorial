#include<stdio.h>
#include<malloc.h>
#include<math.h>

int i = -1,a[1000];

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *insert(struct node *root,int item)
{
	struct node *current,*parent;
	struct node *tempnode=malloc(sizeof(struct node));
	tempnode->data = item;
	tempnode->left = tempnode->right = NULL;
	if(root==NULL)
		root=tempnode;
	else
	{
		current=root;
		parent=NULL;
		while(1)
		{ 
			parent=current;
			if(item<parent->data)
			{
				current=current->left;
				if(current==NULL)
				{
					parent->left=tempnode;
					return root;
				}
			}
		        else
			{
		        	current=current->right;
		        	if(current==NULL)
		        	{
		        		parent->right=tempnode;
		        		return root;
				}
			}
		}
	}

}
void preorder(struct node *root)
{
	struct node *adres =root;
	if(adres == NULL)
		return;
	a[++i] = adres->data;
	preorder(adres->left);
	preorder(adres->right);
}
struct node *findNode(struct node *root,int Q) {
    
    if(root->data == Q) {
        return root;
    }
    else if(root->data > Q) {
        findNode(root->left,Q);
    }
    else{
        findNode(root->right,Q);
    }
    
}    
int main() {
    
    int N,x,j,Q,size;
    float max;
    struct node *root = NULL;
    
    scanf("%d",&N);
    while(N>0) {
        scanf("%d",&x);
        root = insert(root,x);
        N--;
    }
    //preorder(root);
    scanf("%d",&Q);
    root = findNode(root,Q);
    preorder(root);
    //size = sizeof(a)/sizeof(a[0]);
    for(j = 0; j <= i; j++) {
        
        printf("%d\n",a[j]);
        
    }
}