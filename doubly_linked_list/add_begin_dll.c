#include"header.h"
void add_begin_dll(void)
{
DLL *new = malloc(sizeof(DLL));
printf("Enter the employee name, joining year & salary\n");
scanf(" %s%d%f",new->name, &new->year, &new->salary);

if(hptr==0)
{
new->next = hptr;
new->prev = hptr;
hptr = new;
}
else
{
new->next = hptr;
new->prev = hptr->prev;
hptr->prev = new;
hptr = new;
}
}
