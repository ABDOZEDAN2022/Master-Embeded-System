#include "stdio.h"
#include "stdint.h"
#ifndef FIFO_H_
#define FIFO_H_
#define element_type uint8_t
typedef struct
{
	unsigned int length;
	unsigned int count;
	element_type* tail;
	element_type* head;
	element_type* base;
}fifo_buf_t;

typedef enum
{
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null
}fifo_status;
fifo_status fifo_init(fifo_buf_t* fifo,element_type* buf,unsigned int l);
fifo_status fifo_enqueu(fifo_buf_t* fifo,element_type temp);
fifo_status fifo_dequeu(fifo_buf_t* fifo,element_type* temp);
void print(fifo_buf_t* fifo);
#endif
