#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100];
     int temb;
    printf("enter the word:");
    gets(arr);
    int i;
    int j=strlen(arr)-1;
    for(int i=0;i<j;i++)
    {   
        temb=arr[i];
        arr[i]=arr[j];
        arr[j]=temb;
         
         --j;
       
    }
    printf("reversed word you entered is:%s ",arr);
}