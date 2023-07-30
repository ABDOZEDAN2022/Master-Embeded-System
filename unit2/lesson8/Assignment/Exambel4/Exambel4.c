#include "stdio.h"
#include "string.h"
int main()
{
	int n,i,s[50];
	int *s2;
	printf("enter number of element:");
	scanf("%d",&n);
    s2=s;
	for(i=0;i<n;i++)
    {
        printf("enter elements of array:");
        scanf("%d",*s2);
        s2++;
    }
    s2=&s[n-1];
    for(i=n;i>0;i--)
    {
        printf("elements of reversed array:%d",*s2);
        s2--;
    }
    printf("\n");
}
