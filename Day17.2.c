#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main() {

      int i,j,n,k;
     scanf("%d",&n);
    
     if (n<1)

             

          {

             printf("ERROR");

           }
     else
     {
    
      for(i=1;i<=n;i++)
        {
          

          
          
          for(j=1;j<i;j++)
            {
              printf(" ");
              printf(" ");
            }
          for(k=1;k<=2*n-(2*i-1);k++)
            { 
              
              printf("*");
              
             printf(" ");
           
             
            }
            

            printf("\n");
          
          
         
     }
        
 }
      
                
      
return 0;   
}
