#include "lifo.h"
lifo_status lifo_init(lifo_buf_t* lifo_buf,unsigned int *buf,unsigned int l)
{
	lifo_buf->base=buf;
	lifo_buf->head=buf;
	lifo_buf->length=l;
	lifo_buf->count=0;
}
lifo_status lifo_add(lifo_buf_t* lifo_buf,unsigned int buf)
{
	if(!lifo_buf->base ||!lifo_buf->head)
		return lifo_null;
	if(lifo_buf->count==lifo_buf->length)
		return lifo_full;
	*lifo_buf->head=buf;
	lifo_buf->head++;
	lifo_buf->count++;
	return lifo_no_error;
}
lifo_status lifo_pop(lifo_buf_t* lifo_buf,unsigned int *buf)
{
	if(!lifo_buf->base ||!lifo_buf->head)
		return lifo_null;
	if(lifo_buf->count==0)
		return lifo_empty;
	lifo_buf->head--;
	lifo_buf->count--;
	*buf=*lifo_buf->head;
	return lifo_no_error;
}

