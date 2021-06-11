#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,choice;
    scanf("%d",& choice);
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    switch (choice)
       {
         case 1:printf("%d\n",a+b);
          break;
          case 2:printf("%d\n",a-b);
          break;
          case 3:printf("%d\n",a*b);
          break;
          case 4:
            if(b!=0)

             { 

               printf("%0.1f",a/(float)b);

              }
               else

                 printf("Cannot be determined");
               break;

          default:printf("Cannot be determined");

          break;

            

}

              

return 0;

 }         
        
