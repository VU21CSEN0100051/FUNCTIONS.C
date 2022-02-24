#include<stdio.h>
void simple_interest(int p,int t,int r);
int main(void)
{
	int p,t,r;
	scanf("%d%d%d",&p,&t,&r);
	simple_interest(p,t,r);
	return 0;
}
void simple_interest(int p,int t,int r)
{
	int simple_interest=(p*t*r)/100;
	printf("%d",simple_interest);
}
