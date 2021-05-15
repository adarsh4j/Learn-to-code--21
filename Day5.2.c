#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int f;
   
    int a=1;
    
    scanf("%d",&f);
    
    if (f<0)
    printf("ERROR");
    else{
     
    for (int i=1;i<=f;i++)
    
    a=a*i;
    printf("%d \n",a);
    
         }
    
    
    
       
    

        
    return 0;
}
