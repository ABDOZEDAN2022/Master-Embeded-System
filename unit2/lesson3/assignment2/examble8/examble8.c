#include <stdio.h>
int main()
{
int x,y;
printf("enter two number :\r\n");
scanf("%d %d",&x,&y);
char ch;
printf("enter the opertator :\r\n");
scanf("%c",&ch);
switch(ch)
{
    case '+':
    x+y;
    printf("%d",x+y);
    break;
    case '-':
    x-y;
    printf("%d",x-y);
    break;
    case '*':
    x*y;
    printf("%d",x*y);
    break;
    case '/':
    x/y;
    printf("%d",x/y);
    break;
    default :
    printf("false operator\n");
    break;
}

}
