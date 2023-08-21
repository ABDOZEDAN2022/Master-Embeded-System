/*
 * fifo_app.c
 *
 *  Created on: Aug 2, 2023
 *      Author: ELBOSTAN
 */
#include "stdio.h"
#include "fifo.h"

element_type buffer[5];
int main()
{
	fifo_buf_t uart;
	element_type i;
	element_type t;
	if(fifo_init(&uart,buffer,5)==fifo_no_error)
		printf("fifo init done \n");
	for(i=0;i<7;i++)
	{
		if( fifo_enqueu(&uart,i)==fifo_no_error)
			printf("fifo enqueu is done and added :%x\n",i);
		else if( fifo_enqueu(&uart,i)==fifo_full)
			printf("fifo full\n");
		else
			printf("fifo enqueu is failed\n");
	}
	for(i=0;i<7;i++)
		{
			if( fifo_dequeu(&uart,&t)==fifo_no_error)
				printf("fifo dequeu is done and get :%x\n",t);
			else if(fifo_dequeu(&uart,&t)==fifo_empty)
				printf("fifo empty\n");
			else
				printf("fifo dequeu is failed\n");
		}
	print(&uart);
}
