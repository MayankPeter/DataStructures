#include"header.h"
void rev_link_3_ptr(SLL **ptr)
{
SLL *nxt = *ptr , *cur = 0 ,*prev;


while(nxt)
{
prev = cur;
cur = nxt;
nxt = cur->next;
cur->next = prev;
}
*ptr = cur;
}
