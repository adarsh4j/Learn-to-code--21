#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d",&c);
    
    float p;
    p=(a+b+c)/(float)3;
    printf("%0.2f \n",p);
  
    if(p>=90)
    printf("A");
    else if(p>=80)
    printf("B");
    else if(p>=70)
    printf("C");
    else if(p>=60)
    printf("D");
    else if(p>=40)
    printf("E");
    else if(p<40)
    printf("F");
    
      
     
    return 0;
}
