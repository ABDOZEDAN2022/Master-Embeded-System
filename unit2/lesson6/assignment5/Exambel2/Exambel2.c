#include<stdio.h>
struct distance
{
    int foot;
    float inch;
};
int main()
{
     struct distance d1,d2,sum;
    printf("enter information for 1st distance:\n");
    printf("enter feet 1:");
    fflush(stdin);fflush(stdout);
    scanf("%d",&d1.foot);
     printf("enter inche 1:");
    fflush(stdin);fflush(stdout);
    scanf("%f",&d1.inch);
     printf("enter information for 2st distance:\n");
     printf("enter feet 2:");
    fflush(stdin);fflush(stdout);
    scanf("%d",&d2.foot);
     printf("enter inche 2:");
    fflush(stdin);fflush(stdout);
    scanf("%f",&d2.inch);
    printf("***********************\n");
    sum.foot=d1.foot+d2.foot;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>=12)
    {
        sum.inch-=12;
        sum.foot++;
    }
    printf("sum of distance is %d'-%0.1f",sum.foot,sum.inch);
}