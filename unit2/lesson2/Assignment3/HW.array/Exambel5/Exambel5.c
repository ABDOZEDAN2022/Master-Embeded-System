#include <stdio.h>
int main()
{
    int arr[100];
	int n;
    int x;
    printf("enter the number you want to search about it :");
    scanf("%d",&x);
    printf("\n");
    printf("enter size for array :");
	scanf("%d",&n);
    printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("value of item[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
    
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
        {
            printf("value of number you searched is :%d and it is located in %d",arr[i],i+1);
            break;
        }
	}
}