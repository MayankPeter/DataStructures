#include"header.h"
void add_end_dll(void)
{
DLL *new = malloc(sizeof(DLL));
printf("Enter Employee name, joining year & salary\n");
scanf(" %s%d%f",new->name, &new->year, &new->salary);

if(hptr==0)
{
new->next = new->prev = hptr;
hptr = new;
}
else
{
DLL *last = hptr;
while(last->next)
{
last = last->next;
}

new->next = last->next;
new->prev = last;
last->next = new;
}

}
