#include<stdio.h>
int main()
{
    char word[100];
    printf("enter the word: ");
    gets(word);
    for(int i=0;i<100;i++)
    {
      if(word[i]==0)
      {
        printf("the string length of word that you entered is :%d",i);
        break;
      }
    }
}