#include<stdio.h>
int main ()
{
    int n,i=0;
    printf("Enter string len : ");
    scanf("%d",&n);
    char str[n],str2[n];
    char *p=str,*q=str2;
   getchar();
    gets(p);
    while(str[i]!='\0')
    {
        *(q+i)=*(p+n-1-i);
        i++;
    }
    puts(q);
}
