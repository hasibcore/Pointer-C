#include<stdio.h>
int main()
{
    printf("Enter the string size :");
    int n,i=0;
    scanf("%d",&n);
    char str[n+1],str1[n+1];
    char *p=str,*q=str1;
    getchar();
    gets(p);
    while(str[i]!='\0')
    {
        *(q+i)=*(p+i);
        i++;
    }
    puts(q);
}
