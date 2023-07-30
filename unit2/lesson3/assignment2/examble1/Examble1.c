#include<stdio.h>
int main()
{
	int x;
	printf("enter an integr numbere:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("the numbere is even\r\n");
	}
	else

		printf("the numbere is odd\r\n");
}
