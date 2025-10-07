#include<stdio.h>
int main()
{
    int n=20,i=0;
    printf("Enter a string : ");
    char str[n];
    //getchar();
    char *p=str;
    gets(str);
    int vowel=0,con=0,letter=0,symbol=0;
    while(*(p+i)!='\0')
    {
        if((*(p+i)>='A' && *(p+i)<='Z' || *(p+i)>='a' && *(p+i)<='z')|| *(p+i)==' ')
        {
     if(*(p+i)=='A'|| *(p+i)=='a'|| *(p+i)=='E'|| *(p+i)=='e'|| *(p+i)=='I'|| *(p+i)=='i'|| *(p+i)=='O'|| *(p+i)=='o'|| *(p+i)=='U'|| *(p+i)=='u' )
     {
         vowel++;
     }
     else if(*(p+i)>='A' && *(p+i)<='Z' || *(p+i)>='a' && *(p+i)<='z')
     {
         con++;
     }
     letter++;
        }
     else
     {
        symbol++;
     }
     i++;
    }
    printf("Vowels are %d\n",vowel);

    printf("Cons are %d\n",con);

    printf("Letters are %d\n",letter);

    printf("Symbols are %d\n",symbol);
}
