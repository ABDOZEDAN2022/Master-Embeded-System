/*
 * lifo_app.c
 *
 *  Created on: Aug 2, 2023
 *      Author: ELBOSTAN
 */


#include "stdio.h"
#include "lifo.h"
unsigned int buffer[5];
int main()
{
	int i;
	int x=0;
	lifo_buf_t uart;
	lifo_init(&uart,buffer,5);
	for(i=0;i<7;i++)
	{
		if(lifo_add(&uart,i)==lifo_no_error)
			printf("lifo added to uart: %d\n",i);
		else if(lifo_add(&uart,i)==lifo_null)
					printf("there is no lifo added to uart\n");
		else
			printf("lifo is full\n");
	}
	for(i=0;i<7;i++)
	{
		if(lifo_pop(&uart,&x)==lifo_no_error)
			printf("lifo pop from uart: %d\n",x);
		else if(lifo_pop(&uart,i)==lifo_null)
							printf("there is no lifo pop from uart\n");
				else
					printf("lifo is empty\n");
	}
}
