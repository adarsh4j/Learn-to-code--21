#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int main() 
{
    int arr[100],a,i,c,d;  
     scanf("%d",&a);
     for(i=0;i<a;i++)
{
  scanf("%d",&arr[i]);
}
c=d =-50;
for(i=0;i<a;i++)
{
 if(arr[i]>c) 
{
  d=c;
  c=arr[i];
}
  else if(arr[i]>d && arr[i]<c)
{
  d= arr[i];
}
        
}
   printf("%d",d);
 return 0;
}
 
   

   
    

    

    

        

    

    

    

    

    

    

        

        
