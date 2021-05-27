#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int a,i;
     do
    {
     printf("\n1.Table of 1\n");
     printf("2.Table of 2\n");
     printf("3.Table of 3\n");
     printf("4.Table of 4\n");
     printf("5.Table of 5\n");
     printf("6.Exit\n");
    
     scanf("%d",&a);
       
    
     switch (a)
         {
            case 1 :
            for(i=1;i<=10;i++)
          { 
             printf("%d ",a*i);
           }
             break;
              
              case 2 :
              for(i=1;i<=10;i++)
            {
               printf("%d ",a*i); 
             }
              break;
              case 3 :
             for(i=1;i<=10;i++)
            {  
               printf("%d ",a*i);
             } 
              break;
              case 4 :
              for(i=1;i<=10;i++)
             {
                  printf("%d ",a*i);
               }
               break;
              case 5 :
              for(i=1;i<=10;i++)
             {
                  
               printf("%d ",a*i);
              }
               break;
             case 6 : exit (0);
             break;
             default : 
             {
                 printf("Enter a valid option!");
              }
             
            } 
         }
          while(a!=6);
           
         
           
           
         return 0;
             
   }
         
