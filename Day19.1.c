#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int count,cnt,mul,result,rem,number;
    
    scanf("%d",&number);
   int a=number;
    count = 0;
    
    while(a!=0)
       {
        a=a/10;
        count++;
       }
     
    cnt=count,result=0;
      a=number;
    while (a!=0)
      {
        rem=a%10;
        while (cnt!=0)
       {
          mul=mul*rem;
          cnt--;
         }
        result=result+mul;
        cnt=count;
        a=a/10;
        mul=1;
      }
    if(result==number)
       {
        printf("%s\n","Amstrong");
        }
    else
       {
        printf("%s\n","Not Amstrong");
        }
    return 0;
}
