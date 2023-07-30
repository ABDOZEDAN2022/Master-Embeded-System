/*
 * Exambel3.c
 *
 *  Created on: Jul 29, 2023
 *      Author: ELBOSTAN
 */


#include "stdio.h"
#include "string.h"
int main()
{
	char str1[50];
	char str2[50];
	char *s1=str1;
	char *s2=str2;
	printf("enter str1:");
	gets(str1);
	int i=-1;
	while(*s1)
	{
		s1++;
		i++;
	}
	while(i>=0)
	{
		s1--;
		*s2=*s1;
		i--;
		s2++;
	}
	*s2='\0';
	printf("reversed string is -->%s:",str2);
}
