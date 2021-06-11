#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int a,int b)
{
    int sum,rem,n=0,d=1,c,i;
     sum = a + b;
    printf("%d\n",sum);
   c = sum;
   if(c % 2 == 0)
 {
   while(sum != 0) 
 {
    rem = sum % 10;
     n = n*10 + rem;
    sum = sum/10;
 }
    printf("%d",n);
  }
    else
   {
       for (i=2;i<=c-1;i++)
    {
          if(c % i == 0)

     {
       d= 0;

                break;
         }
        }
    
    if(d==1)
     printf("Prime");
     else   
    printf("Not prime");
  }
}
   int main ()    

 {           
int x,y;
 scanf("%d %d",&x,&y);          
sum(x,y);    
  return 0;        
        
}
        
