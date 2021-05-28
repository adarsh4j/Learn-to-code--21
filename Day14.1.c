#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 





{

    int arr[5][5],m,n;

    int i,j;

    scanf("%d",&m);

    scanf("%d",&n);

    

    for(i=0;i<m;i++)

    {

        for(j=0;j<n;j++)

        {

            scanf("%d",&arr[i][j]);

        }

    }

    

    for(i=0;i<m;i++)

    {

        for(j=0;j<n;j++)

        {

            printf("%d ",arr[i][j]);

        }

        printf("\n");

    }

    

    return 0;

}
