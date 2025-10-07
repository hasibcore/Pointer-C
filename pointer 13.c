#include<stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a=10,b=20;
    printf("Before swap :\na=%d \nb=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap :\na=%d \nb=%d",a,b);
}
