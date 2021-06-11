#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student
{
int rollno;
char firstname[50];
float marks;
};
int main() 
{
int i;    
 struct student a[4];
  for(i=0;i<4;i++) 
 {   
scanf("%d",&a[i].rollno);
scanf("%s",a[i].firstname);
scanf("%f",&a[i].marks);
}
for(i=0;i<4;i++)
{
printf("DETAILS OF ROLLNO %d",a[i].rollno);
printf("\nNAME: %s",a[i].firstname);
printf("\nMARKS: %.2f\n",a[i].marks);
 }  
return 0;
}

    

    

    

        

        
        
    

    
