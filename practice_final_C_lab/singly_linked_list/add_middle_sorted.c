#include"header.h"
void add_middle(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter Hosp. No, Name & Bill Amt\n");
scanf(" %d%s%f",&new->hno, new->name, &new->bill);

if((*ptr==0) || (new->hno)>(*ptr)->hno)
{
new->next = *ptr;
*ptr = new;
}
else
{
SLL *last = *ptr;
while((last->next) && (last->next->hno)>(new->hno))
{
last = last->next;
}

new->next = last->next;
last->next = new;
}

}
