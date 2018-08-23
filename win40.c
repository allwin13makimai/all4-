#include<stdio.h>
void main()
{
int b[10],i,j,temp,n;
printf("enter the number");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
temp=a[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
}
