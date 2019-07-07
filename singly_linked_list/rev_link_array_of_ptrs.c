#include"header.h"
void rev_link(SLL **ptr)
{
int c, i;
SLL **p, *tmp;
c = count(*ptr);
p = malloc(sizeof(SLL *)*c);

if(*ptr==0)
{
printf("No nodes in LL\n");
return;
}

tmp = *ptr;
i=0;
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
