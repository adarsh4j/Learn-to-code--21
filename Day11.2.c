#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10]={10,25,8,14,3,23,1,0,12,9},i;
  
    
    printf("%d\n",a[3]);
     
    
    
    printf("%d\n",a[9]);
    
    a[2]=30;
    {
    
    printf("%d\n",a[2]);
    
    }
    for(i=0; i<10; i++)
     {
    printf("%d ",a[i]);
    }

    
    return 0;
}
