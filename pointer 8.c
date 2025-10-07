#include<stdio.h>
#include<string.h>

int main()
{
  int n,i=0,len=0,m;
    printf("Enter first string size : ");
    scanf("%d",&n);
    printf("Enter second string size : ");
    scanf("%d",&m);
    char str1[m+n+1],str2[m+1];
    char *p=str1,*q=str2;
    printf("Enter first string ");
    getchar();
    gets(p);
    printf("Enter second string ");

    gets(q);
    while(*(p+i)!='\0')
    {
        len++;
        i++;
    }
    int len2 =strlen(q);
    printf("the first lenth is %d\n",len);
    printf("the second lenth is %d\n",len2);
  //  char *r=str1[len-1+len2];
    for(i=0;i<len2;i++)
    {

        *(p+len+i)=*(q+i);
    }
    *(p+len+len2)='\0';
    puts(p);
}
