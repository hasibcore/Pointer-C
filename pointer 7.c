#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter the elements of array : ");
for(int i=0;i<n;i++)
{
    scanf("%d",p+i);
}
int max=*p;
int min=*p;
for(int i=0;i<n;i++)
{
    if(max<*(p+i))
    {
        max=*(p+i);

    }
    if(min>*(p+i))
    {
        min=*(p+i);
    }
}
printf("Max is %d\n",max);
printf("Min is %d",min);
}
