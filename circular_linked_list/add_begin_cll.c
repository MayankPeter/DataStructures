#include"header.h"
void add_begin_cll(CLL **hptr)
{
CLL *node = malloc(sizeof(CLL));
printf("Enter passanger name, age and bill amount\n");
scanf(" %s%d%f",node->pname, &node->age, &node->bill);

if(*hptr==0)
{
node->next = node;
*hptr = node;
}
else
{
CLL *last = *hptr;
while((last->next)!=*hptr)
last = last->next;

node->next = *hptr;
last->next = node;
*hptr = node;
}

}
