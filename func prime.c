#include<stdio.h>
int prime(int n);
int main()
{
	int n,x=0;
	x=prime(n);
	if(x==0)
		printf("\n%d IS A PRIME NUMBER",n);
	else
		printf("\n%d IS NOT A PRIME NUMBER",n);
	return 0;
}
int prime(int n)
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
}

