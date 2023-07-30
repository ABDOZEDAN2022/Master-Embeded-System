#include<stdio.h>
int prim(int num);
int main()
{
   int x;
   int n1,n2,j;
   printf("enter two numberes: ");
   scanf("%d%d",&n1,&n2);
   printf("prime number between %d and %d are:\n",n1,n2);
   for (j=n1+1;j<n2;++j)
   {
      x=prim(j);
      if(x==0)
        printf("%d\n",j);
   }
   return 0;
}
int prim(int num)
{
   int x=0;
   for (int i=2;i<num/2;i++)
   {
      if(num%i==0)
      { 
      x=1;
      break;
      }
   }
   return x;
}