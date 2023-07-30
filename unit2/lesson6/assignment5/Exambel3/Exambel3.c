#include<stdio.h>
typedef struct 
{
    float real;
    float imag;
}comp;
comp add_complex(comp n1,comp n2)
{
    comp sum;
    sum.real=n1.real+n2.real;
    sum.imag=n1.imag+n2.imag;
   return(sum);
}
int main()
{
    comp num1,num2,sum;
    printf("enter first complex number:\n");
    printf("enter real and imaganry number respectively: ");
      fflush(stdin);fflush(stdout);
    scanf("%f %f",&num1.real,&num1.imag);
     printf("enter second complex number:\n");
    printf("enter real and imaganry number respectively: ");
      fflush(stdin);fflush(stdout);
    scanf("%f %f",&num2.real,&num2.imag);
   sum=add_complex(num1,num2);
   printf("sum of two complex number is %0.1f+%0.1fj ",sum.real,sum.imag);

}