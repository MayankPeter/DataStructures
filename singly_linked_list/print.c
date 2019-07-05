#include"header.h"
void print(SLL *ptr)
{
while(ptr)
{
printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->marks);
ptr = ptr->next;
}
}
