#include"header.h"
void rev_data(SLL *ptr)
{
SLL *p1, *p2, tmp;
int i,j,c;
c = count(ptr);

p1 = ptr;
for(i=0;i<c/2;i++)
{
p2 = ptr;
for(j=0;j<c-1-i;j++)
{
p2 = p2->next;
}

//tmp.rollno = p2->rollno;
//p2->rollno = p1->rollno;
//p1->rollno = tmp.rollno;

strcpy(tmp.name, p1->name);
strcpy(p1->name, p2->name);
strcpy(p2->name, tmp.name);

tmp.marks = p1->marks;
p1->marks = p2->marks;
p2->marks = tmp.marks;

p1 = p1->next;
}
}
