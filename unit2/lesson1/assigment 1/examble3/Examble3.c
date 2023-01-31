#include<stdio.h>
int main()
{
	int x,y;
	int sum=0;
	printf("enter two integr numberes:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("the sum of two number you entered is: %d\r\n",sum);

}
