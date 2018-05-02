#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
 int rno;
 char name[26];
};
int main()
{
 int n,i,q,j;
 struct student *a,*b;
 scanf("%d",&n);
 a=(struct student*)malloc(n*sizeof(struct student));
 for(i=0;i<n;i++)
  scanf("%d %s",&a[i].rno,a[i].name);
 scanf("%d",&q);
 b=(struct student*)malloc(q*sizeof(struct student));
 for(i=0;i<q;i++)
 {
  scanf("%d",&b[i].rno);
  for(j=0;a[j].rno!=b[i].rno;j++);
  strcpy(b[i].name,a[j].name);
 }
 for(i=0;i<q;i++)
  printf("%s\n",b[i].name);
 free(b);
 free(a);
 return 0;
}
