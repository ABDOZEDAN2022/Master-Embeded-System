#include<stdio.h>
int main()
{
    int m=29;
    printf("adress of m :%p\n",&m);
    printf("value of m :%d\n",m);
    printf("\n");
    int *ab=&m;
    printf("now ab is assigend with the address of m\n");
    printf("adress of ab:%p\n",ab);
    printf("value of ab:%d\n",*ab);
    printf("\n");
    m=34;
    printf("now value of m is assigend to 34\n");
    printf("adress of ab:%p\n",ab);
    printf("value of ab:%d\n",*ab);
    printf("\n");
    *ab=7;
    printf("the pointer variable is assigend with value 7 now\n");
    printf("adress of m :%p\n",&m);
    printf("value of m :%d\n",m);
    printf("\n");
}