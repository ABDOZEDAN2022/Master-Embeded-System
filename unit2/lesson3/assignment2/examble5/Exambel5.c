#include<stdio.h>
int main()
{
    int x;
    printf("enter character :");
    scanf("%c",&x);
    if(x>'A'&&x<'z')
    {
        printf("character %c is an alphapet \n",x);
    }
    else
    {
        printf("character %c is not an alphapet \n",x);
    }
}