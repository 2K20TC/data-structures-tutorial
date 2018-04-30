#include<stdio.h>
#include<string.h>
main()
{
    long int n,r,i,q,a[10000];
    char s[26],h[101][26];
    scanf("%ld",&n);
    for(i=0;i<n;++i)
    {
        scanf("%ld%s",&r,s);
        strcpy(h[r%101],s);
    }
    scanf("%ld",&q);
    for(i=0;i<q;++i)
     
          scanf("%ld",&a[i]);
    for(i=0;i<q;++i)    
      puts(h[a[i]%101]);    
     
}