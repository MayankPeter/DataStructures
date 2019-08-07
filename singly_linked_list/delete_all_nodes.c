#include"header.h"
void delete_all_nodes(SLL **ptr)
{
	SLL *tmp;
	while(*ptr)
	{
		tmp = *ptr;
		*ptr = (*ptr)->next;
		free(tmp);
	}
}
