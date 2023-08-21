

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include "stdio.h"
struct Sstudent
{
	unsigned int id;
	unsigned char name[50];
	float hight;
	struct Sstudent* pnext_student;
};
extern struct Sstudent* gpfirst_student;
void add_student();
int delet_student();
void veiw_all_student();
void delet_all_student();
#endif /* LINKED_LIST_H_ */
