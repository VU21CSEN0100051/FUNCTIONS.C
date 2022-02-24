#include<stdio.h>
void leap(int x);
int main(void)
{
	int n;
	scanf("%d",&n);
    leap(n);
    return 0;
}
void leap(int x)
{
	if(x%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	
}
