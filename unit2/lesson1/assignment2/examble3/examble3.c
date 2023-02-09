#include<stdio.h>
int main()
{
	float x,y,z;
	printf("enter three real numberes:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("%f is biggist number\r\n",x);
	}
	else if(y>x&&y>z)
	{

		printf("%f is biggist number\r\n",y);
	}
	else
		printf("%f is biggist number\r\n",z);
}
