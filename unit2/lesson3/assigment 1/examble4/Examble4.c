#include<stdio.h>
int main()
{
	float x,y;
	float res;
	printf("enter two real number:\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	res=x*y;
	printf(" the resulte of multipling two numberes you entered is: %f\r\n",res);


}
