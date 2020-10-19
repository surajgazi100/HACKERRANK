#include<stdio.h> 
#include<stdlib.h> 
int main() 
{  
 int a,b,c,d,largest; 
  
 //Getting the numbers 
 
 scanf("%d %d %d %d",&a,&b,&c,&d); 
  
 //Actual Computation 
 largest= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d; 
 printf("%d",largest); 
 return 0; 
} 
