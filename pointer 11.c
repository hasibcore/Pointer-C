#include<stdio.h>
void check(int *p)
{
    *p=*p+10;
}
int main()
{
    int a=10;
  //  p=&a;
    check(&a);
    printf("%d",a);
}
