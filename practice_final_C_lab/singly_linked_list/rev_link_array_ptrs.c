#include"header.h"
void rev_link_arr_ptr(SLL **ptr)
{
int c,i=0;
SLL **p,*tmp;
tmp = *ptr;
c = count_nodes(*ptr);
p = (SLL **)malloc(sizeof(SLL *)*c);

while(tmp)
{
p[i++] = tmp;
tmp = tmp->next;
}

p[0]->next = 0;
for(i=1;i<c;i++)
{
p[i]->next = p[i-1];
}

*ptr = p[c-1];
}
