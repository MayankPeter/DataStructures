#include"header.h"
void rev_data(SLL *ptr)
{
SLL *p1,*p2,t;
int i,j,c;
c = count_nodes(ptr);
p1 = ptr;
for(i=0;i<c/2;i++)
{
	p2 = ptr;
	for(j=0;j<c-1-i;j++)
	{
		p2 = p2->next;
	}

	t.hno = p1->hno;
	p1->hno = p2->hno;
	p2->hno = t.hno;

	strcpy(t.name,p1->name);
	strcpy(p1->name,p2->name);
	strcpy(p2->name,t.name);

	t.bill = p1->bill;
	p1->bill = p2->bill;
	p2->bill = t.bill;

	p1 = p1->next;
}
}
