#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void str(char b[50])
{
  int i,c=0;
  for(i=0; b[i]!='\0'; i++)
{
if(b[i] == ' ')
 c++;
}
printf("no of words = %d",c+1);
 printf("\n");

  for(i=strlen(b)-1;i>=0;i--)  
   printf("%c",b[i]);
 }  
int main() 
{
char a[50];        
fgets(a,50,stdin);
str(a);
return 0;
}
