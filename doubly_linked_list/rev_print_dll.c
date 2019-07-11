#include"header.h"
void rev_print_dll(void)
{
DLL *p = hptr;
while(p->next)
{
p = p->next;
}

while(p)
{
printf("%s %d %f\n",p->name, p->year, p->salary);
p = p->prev;
}
}
