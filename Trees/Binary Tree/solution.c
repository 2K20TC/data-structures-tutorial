#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node* lchild;
struct node* rchild;
}*ptr;
struct node* root;
struct node* getnode(int val){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}
int getMax(int a, int b){
    if(a >= b)
        return a;
    else
        return b;
}

int getHeight(struct node *root){
    int leftHeight, rightHeight;
    if(root == NULL)
        return 0;
    leftHeight = getHeight(root->lchild);
    rightHeight = getHeight(root->rchild);
     
    return getMax(leftHeight, rightHeight) + 1;
}
 

int getDiameter(struct node *nodePtr) {
   /* Empty Tree  */
   if (nodePtr == NULL)
     return 0;
 
 
  int leftHeight = getHeight(nodePtr->lchild);
  int rightHeight = getHeight(nodePtr->rchild);
 
  int leftDiameter = getDiameter(nodePtr->lchild);
  int rightDiameter = getDiameter(nodePtr->rchild);
  return getMax(leftHeight + rightHeight + 1, 
              getMax(leftDiameter, rightDiameter));
}
 
main()
{int i,n,m;
 char s[20];
 scanf("%d %d",&n,&m);
 root=getnode(m);
 for(i=1;i<n;i++)
 {
   scanf("%s %d",&s,&m);
   int j=0;
   ptr=root;
   while(s[j]!='\0')
    {
      if(s[j]=='L'){
        if(ptr->lchild==NULL)
           ptr->lchild=getnode(m);
        ptr=ptr->lchild;}
        else
         {
         if(ptr->rchild==NULL)
           ptr->rchild=getnode(m);
         ptr=ptr->rchild;
         }
     j++;
    }
 
 }
 printf("%d\n",getDiameter(root));
}
