
#include<stdio.h>
main()
{
    int i,n,h,a[100],e,j=-1,k=-1,r[100][2],f=0,fl=0;
    char p;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
         while((getchar())!='\n');
         
         scanf("%c",&p);
         if(p=='E')
         {
         scanf("%d",&e);
          
                      a[++j]=e;
                      r[++k][0]=j-f+1;
                      r[k][1]=-2;
                      fl=0;
                    
          }
          else if(p=='D')
          {
                      if(j!=-1 && fl!=1) 
                      {
                        if(j==f)
                            fl=1; 
                        h=a[f++];
                        r[++k][0]=h;
                        r[k][1]=j-f+1;
 
                      }         
                      else{
                           r[++k][0]=1;
                           r[k][1]=0; 
                               
                      }
           }

          
         }
    

    for(int i=0;i<n;++i)
    {
     
      for(int m=0;m<2;++m)
         {
             if(r[i][m]==-2)
               break;
             else    
                printf("%d ",r[i][m]);
         }
        printf("\n");  
    }



}
