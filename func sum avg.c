#include<stdio.h>
void cal(int*,int*,int*);
int main()
{
	int n,s,a;
	scanf("%d",&n);
	cal(&n,&s,&a);
	printf("sum=%d",s);
	printf("avg=%d",a);
}
void cal(int *n,int *sum,int *avg)
{
	int i,x;
	for(i=1;i<=*n;i++)
	{
		scanf("%d",&x);
		*sum=*sum+x;
	}
	*avg=*sum/(*n);
}
