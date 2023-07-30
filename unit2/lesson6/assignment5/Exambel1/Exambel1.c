#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
}Sstudent1;
int main()
{
   printf("Enter information of students:\n");
    printf("Enter the name of students: ");
    fflush(stdin);  fflush(stdout);
    scanf("%s",Sstudent1.name);
    printf("Enter the roll of students: ");
     fflush(stdin);  fflush(stdout);
    scanf("%d",&Sstudent1.roll);
    printf("Enter the marks of students: ");
     fflush(stdin);  fflush(stdout);
    scanf("%f",&Sstudent1.marks);
    printf("Displaying information:\n");
    printf("name:%s\n",&Sstudent1.name);
    printf("roll:%d\n",Sstudent1.roll);
     printf("mark:%0.2f\n",Sstudent1.marks);

}