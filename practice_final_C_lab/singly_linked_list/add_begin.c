#include"header.h"
void add_begin(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter Hosp. no ,name and bill\n");
scanf(" %d%s%f",&new->hno, new->name, &new->bill);

new->next = *ptr;
*ptr = new;

}
