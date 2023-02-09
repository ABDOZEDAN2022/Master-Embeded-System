#include <stdio.h>
int main()
{
	int arr[100];
	int n;
	int newitm,pos;
	printf("enter size for array : \n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("value of item[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter position for array :\n");
	scanf("%d",&pos);
	printf("enter itemes of array :\n");
	scanf("%d",&newitm);
	for(int i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	n++;
	arr[pos]=newitm;
	for( int i=0;i<n;i++)
	{
		printf("array after inserting : %d \n",arr[i]);
	}
}
