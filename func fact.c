#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int g=fact(n);
	printf("FACTORIAL is %d",g);
	return 0;
}
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
