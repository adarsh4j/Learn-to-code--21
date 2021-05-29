#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 

{

    int a[20],x,i,j,tem;

    

    scanf("%d\n",&x);

    

    for(i=0;i<x;i++)

    {

        scanf("%d ",&a[i]);

    }

    

    for(i=0;i<x-1;i++)

    {

        for(j=0;j<x-1-i;j++)

        {

            if(a[j]>a[j+1])

            {

                tem = a[j];

                a[j] = a[j+1];

                a[j+1] = tem;

            }

        }

    }

    

    for(i=0;i<x;i++)

    {

        printf("%d ",a[i]);

    }

    

    

    return 0;

}

   
    

