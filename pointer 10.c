#include<stdio.h>
#include<string.h>
int main ()
{
    int n=20,i=0;
    printf("Enter a string : ");
    char str[n];
    //getchar();
    char *p=str;
    gets(str);
    int z=strlen(p);
      int c=1;
    while(*(p+i)!='\0')
    {
        char ch=*(p+i);
        if(*(p+i)==*(p+z-1-i))
        {
            c=0;
        }
        else
        {
          c++;
        }
        i++;
    }
    if(c==0)
    {
        printf("palindrome");
    }
    else
        {
          printf("Is not palindrome");
        }
}
