#include<stdio.h>
void swap(float *x,float *y)
{
	float temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	float a,b;
	printf("enter two real number:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	printf(" the resulte before swaping (a is:%f and b is: %f)\r\n",a,b);
	swap(&a,&b);
	printf("********************************************************\r\n");
	printf(" the resulte after swaping (a is:%f and b is: %f)\r\n",a,b);

}
