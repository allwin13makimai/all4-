#include<stdio.h>
void main()
{
int c,b,flag,i;
printf("enter the 2 limits");
scanf("%d%d",&c,&b);
while(c<b)
{
flag=0;
for(i=2;i<c/2;i++)
{
if(c%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",c);
++c;
}
}
}
