/*
 * fifo.c
 *
 *  Created on: Aug 2, 2023
 *      Author: ELBOSTAN
 */

#include "fifo.h"
fifo_status fifo_init(fifo_buf_t* fifo,element_type* buf,unsigned int l)
{
	if(buf==NULL)
		return fifo_null;
	fifo->base=buf;
	fifo->tail=buf;
	fifo->head=buf;
	fifo->length=l;
	fifo->count=0;
	return fifo_no_error;
}
fifo_status fifo_enqueu(fifo_buf_t* fifo,element_type temp)
{
	if(!fifo->base||!fifo->tail||!fifo->head)
		return fifo_null;
	if(fifo->count==fifo->length)
		return fifo_full;
	*fifo->head=temp;
	fifo->count++;
	if(fifo->head==(fifo->base+sizeof(element_type)*fifo->length))
		fifo->head=fifo->base;
	else
		fifo->head++;
	return fifo_no_error;
}
fifo_status fifo_dequeu(fifo_buf_t* fifo,element_type* temp)
{
	if(!fifo->base||!fifo->tail||!fifo->head)
		return fifo_null;
	if(fifo->count==0)
		return fifo_empty;
	*temp=*fifo->tail;
	fifo->tail++;
	fifo->count--;
	return fifo_no_error;
}
void print(fifo_buf_t* fifo)
{
	for(int i=0;i<fifo->length;i++)
	{
		if(*fifo->tail==0)
				{
					break;
				}
		printf("%x\n",*fifo->tail);
		fifo->tail++;
	}
}
















