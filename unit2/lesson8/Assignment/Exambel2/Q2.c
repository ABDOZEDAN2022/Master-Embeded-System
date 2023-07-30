#include<stdio.h>
int main()
{
    char alpha[27];
    char* ptr=NULL;
    ptr=alpha;
    int i=0;
    //*ptr=i+'A';
    for(i=0;i<26;i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr=alpha;
    printf("alphapet are :\n");
    for(int i=0;i<26;i++)
    {
        printf("%c\t",*ptr);
        ptr++;
    }
    
}