#include<stdio.h>
int main()
{
	int n;
	int fact=1;
	printf("enter the numbere:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error !,factorial of negative number doesnot exit \r\n");
	}

	else
	{
		for(int i=n;i>0;i--)
		{
			fact *=i;
		}
		printf("res of numberes equal:%d\r\n",fact);

	}
}
