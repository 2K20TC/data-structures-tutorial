
#include<stdio.h>
main()
{
    int i,n,h,a[100],e,j=-1,r[10000],k=0,m=0;
    char p;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
         while((getchar())!='\n');
         
         scanf("%c",&p);
         if(p=='2')
         {
         scanf("%d",&e);
          
                      a[++j]=e;

                    
          }
          else if(p=='1')
          {
            ++m;
                      if(j!=-1) 
                      {
 
                        h=a[j--];
                        r[k++]=h;
                        
 
                      }         
                      else{
                           r[k++]=-1; 
                                      
                      }
           }

          
         }
    

    for(int i=0;i<m;++i)
    {
    
             if(r[i]==-1)
               printf("No food");
             else    
                printf("%d ",r[i]);
        
        printf("\n");  
    }



}