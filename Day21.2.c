#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime_count(int a)
{
int i,b,c=0;
for(i=2;i<a;i++)
{
   if(a%i==0) 
   c++;
 }
if (c==0)
  b=1;
else
  b=0;
return b;
  }  
int main() 
{
int a[100],n,i,d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);  
}
  for(i=0;i<n;i++)
{
   if(prime_count(a[i])==1)  
    d++; 
  }
printf("%d",d);
 return 0;
}

       
    

        

    

 
