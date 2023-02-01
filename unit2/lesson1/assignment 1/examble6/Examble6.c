#include<stdio.h>
int main()
{
	float a,b;
	float temp;
	printf("enter two real number:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	printf(" the resulte before swaping (a is:%f and b is: %f)\r\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("********************************************************\r\n");
	printf(" the resulte after swaping (a is:%f and b is: %f)\r\n",a,b);

}
