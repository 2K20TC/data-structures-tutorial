#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node* lchild;
struct node* rchild;
};
struct node* root;
struct node* insert(struct node* root,int it)
{
  if(root==NULL)
    {
      root=(struct node *)malloc(sizeof(struct node));
        root->lchild=NULL;
        root->rchild= NULL;
        root->data = it;
        return root;
    }
   else
    {
        if(it< root->data )
            root->lchild=insert(root->lchild,it);
        else if(it>root->data)
            root->rchild=insert(root->rchild,it);
        else
            printf(" Duplicate Element !! Not Allowed !!!");
        return(root);
    }
}
void create(int n)
{int i,it;
 for(i=0;i<n;i++)
   {  
      scanf("%d",&it);
      root=insert(root,it);
   }
}
void preorder(struct node *root)
{
   if(root!=NULL)
    {  
       printf("%d\n",root->data);
       preorder(root->lchild);
       preorder(root->rchild);
    }
}
void find(int m,struct node *root)
{  if(root->data==m)
      preorder(root);
    else if(root->data<m)
       find(m,root->rchild);
    else
        find(m,root->lchild);
}
    

main()
{   int m,n;
    scanf("%d",&n);
    create(n);
    scanf("%d",&m);
    find(m,root);    
}



