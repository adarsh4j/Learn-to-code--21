#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c,d,r1,r2,x,y;

    

    scanf("%f %f %f",&a,&b,&c);

    

    d = (b*b-4*a*c);

    

    if(d>0)

    {

        printf("Distinct Real : ");

        r1 = (-b+sqrt(d))/(2*a);

        r2 = (-b-sqrt(d))/(2*a);

        printf("%.2f , %.2f",r1,r2);

    }

    

    if(d == 0)

    {

        printf("Equal Real: ");

        r1 = (-b)/(2*a);

        printf("%.2f , %.2f",r1,r1);

    }

    

    if(d<0)

    {

        printf("Complex: ");

        x = (-b)/(2*a);

        y = sqrt(-(d))/(2*a);

        

        printf("%.2f + i%.2f , ",x,y);

        printf("%.2f - i%.2f",x,y);

        

    }

    

    

    return 0;

}





