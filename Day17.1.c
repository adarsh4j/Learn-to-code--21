 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        for (j=1;j<=i;j++)
          {
            printf("%d ",j);
          }
           printf("\n");
        }
    if(n<1)
     printf("%s","ERROR");
    
       
    

  
    return 0;
}
