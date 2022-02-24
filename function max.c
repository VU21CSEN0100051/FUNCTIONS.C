#include<stdio.h>
void max(int a,int b)
{
	if(a>b)
	{
		printf("a is max");
	}
	else
	{
		printf("b is max");
	}
}
int main(void)
{
	max(2,4);
	return 0;
}
