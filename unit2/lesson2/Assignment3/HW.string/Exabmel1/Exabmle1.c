#include<stdio.h>
#include<string.h>
int main()
{
 char arr[100];
 char ch;
 int num=0;
 printf("enter the array of string: ");
 gets(arr);
 printf("enter the character that you want knowing number of reapiting it: ");
 scanf("%c",&ch);
 for(int i=0;i<strlen(arr);i++)
 {
   
    if(arr[i]==ch)
    {
        num++;
    }
 }
 printf("frequency of %c is %d\n",ch,num);
}