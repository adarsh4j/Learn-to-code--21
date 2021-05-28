#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()

{

    char arr[100],a;

    int i,c=0;

    

    fgets(arr,100,stdin);

    

    scanf("%c",&a);

    

    for(i=0;i<strlen(arr);i++)

    {

        if(arr[i] == a)

        {

            c ++;

        }

    }

    

    printf("%d",c);

    

    return 0;

}

     
    

