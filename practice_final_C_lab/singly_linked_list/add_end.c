#include"header.h"
void add_end(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter the Hosp. No, Name, Bill Amt.\n");
scanf(" %d%s%f",&new->hno, new->name, &new->bill);

if(*ptr==0)
{
new->next = *ptr;
*ptr = new;
}
else
{
SLL *last = *ptr;
while(last->next)
{
last = last->next;
}
new->next = last->next;
last->next = new;
}

}
