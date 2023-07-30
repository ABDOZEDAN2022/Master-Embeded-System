#include<stdio.h>
#define pi 3.1415
#define area(r) (pi*(r)*(r))
int main()
{
    int red;
    float are;
    printf("enter the redias:");
    scanf("%f",&red);
    are=area(red);
    printf("%f",are);
}