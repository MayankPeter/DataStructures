#include"header.h"
void rev_link_3_ptrs(SLL **ptr)
{

	SLL *nxt=*ptr,*cur=0,*prev;
	while(nxt)
	{
		prev=cur;
		cur=nxt;
		nxt=nxt->next;
		cur->next=prev;
	}
	*ptr=cur;

}
