#include<stdio.h>
int main()
{
char ch,a,z,A,Z;
printf("enter the character:");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("character is alphabet");
}
else
{
printf("character is not alphabet");
}
return 0;
}
