#include<stdio.h>
int aver(int *p,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+*(p+i);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int arr[n];
    int *q=arr;
    for(int i=0;i<n;i++)
    {
        scanf("%d",q+i);
    }
    printf("%d",aver(arr,n));
}
