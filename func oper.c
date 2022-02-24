#include <stdio.h>
void oper(int*,int*,int*,int*,int*);
 int main()
{
  int a,b,c,d,e;
  scanf("%d%d",&a,&b);
  oper(&a,&b,&c,&d,&e);
  printf("\nthe sum is %d",c);
  printf("\nthe diff is %d",d);
  printf("\nthe product is %d",e);
return 0;
}
void oper(int*p,int*q,int*r,int*s,int*t)
{
  printf("%d%d",*p,*q);
  *r=*p+*q;
  *s=*p-*q;
  t=*p**q;
}
