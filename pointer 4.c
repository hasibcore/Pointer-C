#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],*p=a;
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(i<n-1)
        {

        printf("%d+",*(a+i));
        }
        else
        {
           printf("%d",*(a+i));
        }
        sum=sum+*(p+i);

    }
    printf("=%d",sum);
}
