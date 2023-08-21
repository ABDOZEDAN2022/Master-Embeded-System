#ifndef _LIFO_H_
#define _LIFO_H_
typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int* head;
	unsigned int* base;
}lifo_buf_t;
typedef enum
{
	lifo_no_error,
	lifo_full,
	lifo_empty,
	lifo_null
}lifo_status;
lifo_status lifo_init(lifo_buf_t* lifo_buf,unsigned int *buf,unsigned int l);
lifo_status lifo_add(lifo_buf_t* lifo_buf,unsigned int buf);
lifo_status lifo_pop(lifo_buf_t* lifo_buf,unsigned int *buf);
#endif
