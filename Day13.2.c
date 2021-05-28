#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 





{

    char arr[100];

    int i;

    

    fgets(arr,100,stdin);

    

    for(i=0;i<strlen(arr);i++)

    {

        if(arr[i]>=65 && arr[i]<=90)

        {

            arr[i]=arr[i]+32;

        }

        

        else if(arr[i]>=97 && arr[i]<=122)

        {

            arr[i]=arr[i]-32;

        }

        

        

    }

    

    printf("%s",arr);

    

    

    

    return 0;

}
   
