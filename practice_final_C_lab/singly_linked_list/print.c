#include"header.h"
void print(SLL *ptr)
{
while(ptr)
{
printf("%d %s %f\n",ptr->hno, ptr->name, ptr->bill);
ptr = ptr->next;
}
}
