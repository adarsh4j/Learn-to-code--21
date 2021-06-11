#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int a)
{
   if(a== 0) 
     return 1;

    else 
    return (a*factorial(a-1)); 
}
  int main()  
{
   int num;    
   scanf("%d",&num);
    if(num>=0)
{
   printf("%d",factorial(num));     
}
   else
{
       printf("%s","ERROR");
  }
 return 0;
}
