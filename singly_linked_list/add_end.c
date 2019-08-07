#include"header.h"
void add_end(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter the rollno, name & marks\n");
scanf(" %d%s%f",&new->rollno, new->name, &new->marks);

if(*ptr==0)
{
new->next = *ptr;
*ptr =new;
}
else
{
new->next = (*ptr)->next;
(*ptr)->next = new;
}
}
