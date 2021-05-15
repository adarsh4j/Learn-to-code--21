#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //initialization
    //comparison
    //update
    
    for(int i=1;i <=100;i++)
        
    if(i%15 ==0)
    printf("FIZZBUZZ ");
    
    else if(i%5 ==0)
    printf("BUZZ ");
    
    else if(i%3 ==0)
    printf("FIZZ ");
    
    else
    printf("%d " , i);
    
    return 0;
    
}
