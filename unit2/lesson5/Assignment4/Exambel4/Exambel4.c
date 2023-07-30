#include<stdio.h>
int power(int x,int y)
{ 
        if(y!=0)
        {
           return ( x*power(x,y-1));
        }
       else 
      return 1;
}
int main()
{   
    int num,p;
    printf("enter number: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&p);
    printf("%d",power(num,p));
}