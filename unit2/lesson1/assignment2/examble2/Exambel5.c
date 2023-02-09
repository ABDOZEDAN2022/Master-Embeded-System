#include<stdio.h>
int main()
{
    int ch;
    printf("enter character : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("the character you enter is vowel");
    }
    else
    {
        printf("the character you enter is constant");
    }
}