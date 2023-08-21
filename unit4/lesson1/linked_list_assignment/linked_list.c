

#include "linked_list.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct Sstudent* gpfirst_student=NULL;
void add_student()
{
	struct Sstudent* pnew_student;
	if(gpfirst_student==NULL)
	{
		pnew_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		gpfirst_student=pnew_student;
		pnew_student=NULL;
	}
	else
	{
		struct Sstudent* plast_student=gpfirst_student;
		if(plast_student)
			plast_student=plast_student->pnext_student;
		pnew_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		plast_student=pnew_student;
		pnew_student->pnext_student=NULL;
	}
	unsigned char temp[40];
	printf("\n please enter id of student:");
	gets(temp);
	pnew_student->id=atoi(temp);
	printf("\n**********\n");
	printf("\n please enter name of student:");
	gets(pnew_student->name);
	printf("\n**********\n");
	printf("\n please enter hight of student:");
	gets(temp);
	pnew_student->hight=atof(temp);
	printf("\n**********\n");
}

int delet_student()
{
	unsigned int selected_id;
	unsigned char temp[40];
	printf("\n please enter id of student");
	gets(temp);
	selected_id=atoi(temp);
	struct Sstudent* pslcted_student=gpfirst_student;
	struct Sstudent* pre_student=NULL;
	if(gpfirst_student)
	{
		while(pslcted_student)
		{
			if(pslcted_student->id==selected_id)
			{
				if(pre_student)
				{
					pre_student=pslcted_student->pnext_student;
				}
				else
				{
					gpfirst_student=pslcted_student->pnext_student;
				}
				free(pslcted_student);
				return 1;
			}
			pre_student=pslcted_student;
			pslcted_student=pslcted_student->pnext_student;
		}
		printf("\ncan not find selected id");
		return 0;
	}


}
void veiw_all_student()
{
	unsigned int i=0;
	if(gpfirst_student==NULL)
	{
		printf("we can not find any student in this list\n");
	}
	else
	{
		struct Sstudent* current_student=gpfirst_student;
		while(current_student)
		{
			printf("\n we will print student number:%d",i+1);
			printf("\n id of current student is:%d",current_student->id);
			printf("\n name of current student is:%s",current_student->name);
			printf("\n height of current student is:%f",current_student->hight);
			current_student=current_student->pnext_student;
			i++;
		}
	}
}
void delet_all_student()
{
	if(gpfirst_student==NULL)
		{
			printf("we can not find any student in this list\n");
		}
		else
		{
			struct Sstudent* current_student=gpfirst_student;
			while(current_student)
			{
				free(current_student);
				current_student=current_student->pnext_student;
			}
			gpfirst_student=NULL;
		}

}









