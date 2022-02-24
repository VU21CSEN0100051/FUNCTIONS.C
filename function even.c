#include<stdio.h>
void number(int a)
{
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}
int main(void)
{
	int a;
    scanf("%d",&a);
    number(a);
	return 0;
}
