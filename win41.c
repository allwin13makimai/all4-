#include<stdio.h>
void main()
{
char s[10],j;
printf("enter a string");
scanf("%s",&s);
for(j=0;s[j]!='\0';j++)
{
if((s[j]>'a')&&(s[j]<'z'))
{
printf("no numeric");

}
else
{
    printf("%c\n",s[j]);
}
}
}
