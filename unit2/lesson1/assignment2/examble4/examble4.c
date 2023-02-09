#include<stdio.h>
int main()
{
	int x;
	printf("enter the numbere:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0)
	{
		printf("the number you entered is positive number\r\n");
	}
	else if(x<0)
	{

		printf("the number you entered is negative number\r\n");
	}
	else
		printf("the number you entered is zero");
}
