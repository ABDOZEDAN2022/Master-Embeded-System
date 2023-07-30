#include <stdio.h>
int main()
{
  float x[2][2];
  float y[2][2];
  printf("we will write itemes of matrix x\n");
  for (int i=0;i<2;i++)
   {
 	  for(int j=0;j<2;j++)
 	  {
 		 printf("enter item of matrix x[%d][%d]: ",i,j);
 		 fflush(stdin);fflush(stdout);
 		 scanf("%f",&x[i][j]);
          //printf("\n");
 	  }
   }
  printf("****************************\n");
  
  printf("**************we will print the sum**************\n");
  float sum[2][2];
  for (int i=0;i<2;i++)
  {
	  for(int j=0;j<2;j++)
	  {
		  sum[i][j]=x[i][j]+y[i][j];
	  }
  }
  for (int i=0;i<2;i++)
   {
 	  for(int j=0;j<2;j++)
 	  {
 		  printf("the sum of x[%d][%d] and y[%d][%d] is %1.01f\n",i,j,i,j,sum[i][j]);
 	  }
   }
}
