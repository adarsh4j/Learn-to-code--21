#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rev,r,orginal;
    
   
    scanf ("%d",&n);
    orginal=n;
   
    while (n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }
  if(orginal==rev)
 {
      printf("Yes");
  }
  else
  {
    printf("No");
      
   }  

    
    
    return 0;
}
