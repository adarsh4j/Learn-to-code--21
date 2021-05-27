#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {




            int n1,i,n2,ch=0;

            scanf("%d\n",&n1);

            int array[n1];

            for(i=0;i<n1;i++)

            {

            scanf("%d\n",&array[i]);

            }

            scanf("%d/n",&n2);

            for(i=0;i<n1;i++)

            {

             if(n2==array[i])

                ch++;

            }

            if(ch==0)

                printf("%d is not present in this array",n2);

            else

                printf("%d is present in this array",n2);

                

            return 0;


 
  
}
