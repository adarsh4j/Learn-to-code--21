#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


     void swap(int,int);
     int main() 
   {
    int a,b;
     scanf("%d%d", &a , &b);
   printf("%s%d","a=",a);
         
   printf(" %s%d","b=",b);
     swap(a, b);
    
    
    return 0;
}
  void swap(int x,int y)

    {
     int temp;
      
      temp=x;
       x=y;
      y=temp;
   printf("\n%s%d","a=",x);
   printf(" %s%d","b=",y);
 }
