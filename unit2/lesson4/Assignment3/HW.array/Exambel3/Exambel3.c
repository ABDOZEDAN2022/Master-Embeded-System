#include <stdio.h>
int main()
{
	int x[2][3];
	char trans[3][2];
	printf("enter item of matrix x");
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("enter item of matrix x[%d][%d]: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[i][j]);
		}
	}
	printf("****************************\n");
	for (int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				 printf("the x matrix  is %d\n",x[i][j]);
			}
		}
	printf("****************************\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			trans[j][i]=x[i][j];
			printf("the trans matrix  is %d\n",trans[i][j]);
		}
	}
	 for (int i=0;i<3;i++)
	   {
	 	  for(int j=0;j<2;j++)
	 	  {
	 		printf("the trans matrix  is %d\n",trans[i][j]);
	 	  }
	  }
}
