#include"header.h"
void add_end_cll(CLL **hptr)
{
CLL *node = malloc(sizeof(CLL));
printf("Enter passanger name, age & bill amount\n");
scanf(" %s%d%f",node->pname, &node->age, &node->bill);

if(*hptr==0)
{
node->next = node;
*hptr = node;
}
else
{
CLL *end = *hptr;
while(end->next!=*hptr)
{
end = end->next;
}

node->next = end->next;
end->next = node;
}
}
