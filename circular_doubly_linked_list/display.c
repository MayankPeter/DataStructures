#include"header.h"
void display(void)
{
CDLL *ptr = hptr;
while(ptr->next!=hptr)
{
printf("%f %s %d\n",ptr->temp, ptr->city, ptr->pin);
ptr = ptr->next;
}
printf("%f %s %d\n",ptr->temp, ptr->city, ptr->pin);
}
