#include<stdio.h>
int main()
{
	int n,i,b,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		b=n%10;
		sum=sum*10+b;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
