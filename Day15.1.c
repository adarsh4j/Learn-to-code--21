#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
       int a[20][20],i,j,r,c,n,x=0;
         scanf("%d%d",&r,&c);
        for(i=0;i<r;i++)
         {
            for(j=0;j<c;j++)
             {
               scanf("%d",&a[i][j]);
              }
          }
               scanf("%d",&n);
             
          
        for(i=0;i<r;i++)
          {
             for (j=0;j<c;j++)
              {
                if(n==a[i][j])
                 {
                 printf("Element found at (%d,%d)\n",i,j);
                  x++;
                 }
              }
          }
            if(x==0)
              {
                printf ("Element not found");
              }
    return 0;
}
               
