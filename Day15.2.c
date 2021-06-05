#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 









{

    int a[5][5],b[5][5],row1,col1,row2,col2;

int i,j,k,pro[5][5],s=0;

    

    scanf("%d %d",&row1,&col1);

    

    for(i=0;i<row1;i++)

    {

        for(j=0;j<col1;j++)

        {

            scanf("%d ",&a[i][j]);

        }

    }

    

    scanf("%d %d",&row2,&col2);

    

    for(i=0;i<row2;i++)

    {

        for(j=0;j<col2;j++)

        {

            scanf("%d ",&b[i][j]);

        }

    }

    

    

    for(i=0;i<row1;i++)

    {

        for(j=0;j<col2;j++)

        {

            for(k=0;k<row2;k++)

            {

                s = s + a[i][k]*b[k][j];

            }

            pro[i][j] = s;

            s = 0;

        }

    }

    

    

    if(col1 ==row2)

    {

        for(i=0;i<row1;i++)

        {

            for(j=0;j<col2;j++)

            {

                printf("%d ",pro[i][j]);

            }

            printf("\n");

        }

    }

    else

    {

        printf("ERROR");

    }

       

    return 0;



}
