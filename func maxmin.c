#include<stdio.h>
void max(int *,int *);
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	max(&a,&b);
	return 0;
}
void max(int *p,int *q)
{
	if(*p>*q)
	{
		printf("a is max");
		printf("b is min");
	}
	if(*p<*q)
	{
		printf("b is max");
		printf("a is min");
	}
}
