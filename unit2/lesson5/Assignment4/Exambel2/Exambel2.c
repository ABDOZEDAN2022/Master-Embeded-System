#include<stdio.h>
int fact(int num)
{
 if(num !=1)
 return num*fact(num-1);  
}
int main()
{ 
    int x;
  printf("enter number :");
  scanf("%d",&x);
  printf("factorial of number you entered is :%d",fact(x));

}