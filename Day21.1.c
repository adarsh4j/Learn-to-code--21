#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
char a[100];
fgets(a,100,stdin);
 int i,b=0,c=0,d=0;
for(i=0; a[i]!= '\0'; i++)
{
if(a[i]== ' ')
 b++;  
 else if( a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
     c++;
   else 
d++;
 }
printf( "%d\n%d\n%d",c,d,b);
 return 0;
}

    
