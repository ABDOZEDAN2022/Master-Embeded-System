/*
 * linked_list_app.c
 *
 *  Created on: Aug 3, 2023
 *      Author: ELBOSTAN
 */
#include "stdio.h"
#include "string.h"
#include "linked_list.h"
int main()
{
	char temp[40];
	while(1)
	{
		printf("please choose number of option:\n");
		printf("choose number 1 to add student:\n");
		printf("choose number 2 to delet student:\n");
		printf("choose number 3 to print_all student:\n");
		printf("choose number 4 to delet_all student:\n");
		gets(temp);
		switch(atoi(temp))
		{
		case 1:
			add_student();
			break;
		case 2:
			delet_student();
			break;
		case 3:
			veiw_all_student();
			break;
		case 4:
			delet_all_student();
			break;
			defualt :
			printf("you enter wrong choice\n");
		}
		char x[20];
		printf("\ndo you want to run again?:");
		gets(x);
		if(strcmp(x,'yes')==0)
			printf("ok....,we will run again..!\n");
		else
			break;
	}
}
