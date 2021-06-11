#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[100],i,b;
scanf("%d",&b);
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
 }
  printf("DISPLAYING USING INDEX: ");  
 for(i=0;i<b;i++)
 {  
printf("%d ",a[i]);
  } 
for(i=0;i<b;i++)
{
 scanf("%d",a+i);   
}
 printf("\n");   
printf("DISPLAYING USING POINTERS: ");
 for(i=0;i<b;i++)   
{
 printf("%d ",*(a+i));       
}
 return 0;   
}
    

    

    

        

    
