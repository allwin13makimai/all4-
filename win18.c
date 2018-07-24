#include<stdio.h>
int main()
{
 int i,a,b;
 printf("enter the a value");
 scanf("%d",&a);
 printf("enter the b value");
 scanf("%d",&b);
 for(i=a;i<=b;i++)
 {
  if(i%2==0)
   printf("%d",i);
 }
