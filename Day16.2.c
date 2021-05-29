#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>






int main() 

{

    int array[10],x,j,min,max;

    

    scanf("%d",&x);

    

    for(j=0;j<x;j++)

    {

        scanf("%d ",&array[j]);

    }

    

    max = min = array[0];

    

    for(j=1;j<x;j++)

    {

        if(array[j]<min)

        {

            min = array[j];

        }

        

        if(array[j]>max)

        {

            max = array[j];

        }

    }

    

    printf("%d\n",min);

    printf("%d",max);

     

    return 0;

}
