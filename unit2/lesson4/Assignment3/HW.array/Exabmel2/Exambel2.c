#include <stdio.h>
int main()
{
	float x[6]={45.3,67.5,-45.6,20.34,33,45.6};
	float sum=0;
	int i;
	for( i=0;i<6;i++)
	{
		sum+=x[i];
	}
	  printf("the average of array x and  is %1.01f\n",sum/(i));
}
