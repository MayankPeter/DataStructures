#include"header.h"
void rev_link_dll(void)
{
DLL *ptr = hptr;
DLL *t1;
while(ptr)
{
if(ptr->next==0)
hptr = ptr;

t1 = ptr->next;
ptr->next =  ptr->prev;
ptr->prev = t1;

ptr = ptr->prev;
}

}
