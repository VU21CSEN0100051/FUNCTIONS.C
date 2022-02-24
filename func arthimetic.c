#include<stdio.h>
void arthematic(int a,int b);
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	arthematic(a,b);
	return 0;
}
void arthematic(int a,int b)
{
	int x=a+b;
	int y=a-b;
	int z=a*b;
	int m=a%b;
	printf("%d",x);
	printf("%d",y);
	printf("%d",z);
	printf("%d",m);
}

