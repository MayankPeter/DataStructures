#include"header.h"
void rev_print_iter(SLL *ptr)
{
int c,i,j;
SLL *p;
c = count(ptr);
for(i=0;i<c;i++)
{
p = ptr;
for(j=0;j<c-1-i;j++)
{
p = p->next;
}
printf("%d %s %f\n",p->rollno, p->name, p->marks);
}
}
