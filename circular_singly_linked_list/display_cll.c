#include"header.h"
void display(CLL *p)
{
CLL *ptr = p;
while(ptr->next!=p)
{
printf("%s %d %f\n",ptr->pname, ptr->age, ptr->bill);
ptr = ptr->next;
}

printf("%s %d %f\n",ptr->pname, ptr->age, ptr->bill);
}
