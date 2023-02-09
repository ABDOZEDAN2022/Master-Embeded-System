#include <stdio.h>
int main()
{
	char x[100]="riham elsaber";
   
   printf("text is: %s\n",x);
    printf("***************************\n");
   char r[20];
   int i=0;
   while( x[i]=0)
   {
      r[i]=x[i];
      i++;
   }
   r[20]=0;
 printf("text is: %s\n",&r[0]);
}
