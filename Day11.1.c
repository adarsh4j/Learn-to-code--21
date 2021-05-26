 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a[20],i,N;
     scanf("%d ",&N);
      
     for(i=0; i<N; i++)
      {
         
         scanf("%d ",&a[i]);
         
       }
       printf("Entered array: ");
      for(i=0; i<N; i++){
       
      printf("%d ",a[i]);
      }
      printf("\n%d",a[1]);
    return 0;
    
}
