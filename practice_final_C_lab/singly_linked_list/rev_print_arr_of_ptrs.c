#include"header.h"
void rev_print_arr_ptrs(SLL *ptr)
{
SLL **p;
int i,j,c;
c = count_nodes(ptr);
p =(SLL **)malloc(sizeof(SLL *)*c);

for(i=0;i<c;i++)
{
p[i] = ptr;
ptr = ptr->next;
}

for(i=c-1;i>=0;i--)
{
printf("%d %s %f\n",p[i]->hno, p[i]->name, p[i]->bill);
}
}
