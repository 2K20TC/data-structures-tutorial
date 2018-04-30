#include<stdio.h>
#include<stdlib.h>
struct bi
{
  struct bi *l,*r;
  int v;
}*b,*root,*p,*ptr;


void cre(int h)
{
  b=(struct bi*)malloc(sizeof(struct bi));
  b->r=b->l=NULL;
  b->v=h;
  p=root;
  while(p!=NULL)
  {
    ptr=p;
    if(p->v>h)
       p=p->l;
    else
       p=p->r;
          
  }
  if(ptr->l==NULL && ptr->v>h)
     ptr->l=b;
  else if(ptr->r==NULL && ptr->v<h)
     ptr->r=b;   
}

void pre(struct bi *k)
{
   if(k==NULL)
      return;
   
    printf("%d\n",k->v);
    pre(k->l);
   
    pre(k->r);
   
}     
void trav(int q)
{ 
p=root;
  while(p!=NULL)
    {
    if(p->v==q)
      { pre(p);
      break;}    
    else if(p->v>q)
       p=p->l;
    else
       p=p->r;
          
  }
  
   
}



main()
{
  int n,l,q;
  scanf("%d",&n);
  root=(struct bi*)malloc(sizeof(struct bi));
  root->l=root->r=NULL;
  root->v=-1;
  scanf("%d",&l);
  root->v=l;
  for(int i=0;i<n-1;++i)
  {
     scanf("%d",&l);
     cre(l);    
  }
   scanf("%d",&q);
  trav(q);
  
}

  
