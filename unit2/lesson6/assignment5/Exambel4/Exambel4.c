#include<stdio.h>
struct student
{
    char name[100];
    float marks;
};
int main()
{ 
   struct student Sstudent[10];
   int i;
   for(i=0;i<10;i++)
   {
   printf("Enter information of students his roll:%d\n",i+1);
    printf("Enter the name of students: ");
    fflush(stdin);  fflush(stdout);
    scanf("%s",Sstudent[i].name);
    printf("Enter the marks of students: ");
     fflush(stdin);  fflush(stdout);
    scanf("%f",&Sstudent[i].marks);
   }
   for(i=0;i<2;i++)
   {
    printf("Displaying information for student :%d\n",i+1);
    printf("name:%s\n",&Sstudent[i].name);
     printf("mark:%0.2f\n",Sstudent[i].marks);
   }
   return 0;
}