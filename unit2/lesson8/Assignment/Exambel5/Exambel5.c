#include "stdio.h"
struct emp
{
    char *empname;
    int empid;
}
int main()
{
    static struct emp emp1={"abdo",1001},{"alex",1002},{"tay",1003};
    struct emp (*arr[])={&emp1,&emp2,&emp3};
    struct emp (*(*pt)[3])=&arr;
    printf("emploree name: %s\n",(**(*pt+1)).empname);
    printf("emploree name: %s\n",(*(*pt+1))->empid);
    return 0;
}