#include<stdio.h>
int main()
{
	int x;
	int sum=0;
	printf("enter the numbere:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=x;i>0;i--)
	{
		sum +=i;
	}
	printf("sum of numberes equal:%d\r\n",sum);
}
