#include<stdio.h>
int mul(int *p,int *q)
{
    return (*p)*(*q);
}
int main()
{
    int a=5,b=8;
    int z=mul(&a,&b);
    printf("%d",z);
}
