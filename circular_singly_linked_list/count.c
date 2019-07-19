#include"header.h"
int count_csll_nodes(CLL *ptr)
{
CLL *p = ptr;
int count=1;
while(ptr->next!=p)
{
count++;
ptr = ptr->next;
}
return count;
}
