#include"header.h"
void add_begin_cdll(void)
{
CDLL *new = malloc(sizeof(CDLL));
printf("Enter temperature , city and pincode\n");
scanf(" %f%s%d",&new->temp, new->city, &new->pin);

if(hptr==NULL)
{
new->next = new->prev = new;
hptr = new;
}
else
{
new->prev = hptr->prev;// update last in 1st
new->next = hptr;// update next node add in new
hptr->prev->next = new;// 
hptr->prev = new;// next node prev new
hptr = new;
}
}
