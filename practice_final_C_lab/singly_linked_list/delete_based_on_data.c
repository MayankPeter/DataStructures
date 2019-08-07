#include"header.h"
void delete_node_data(SLL **ptr)
{
	int n;
	SLL *tmp = *ptr,*t2;
	printf("Enter the data to be delete\n");
	scanf(" %d",&n);

	while(tmp)
	{
		if(tmp->hno==n)
		{
			if(tmp==*ptr)
			{
				*ptr = tmp->next;
			}
			else
			{
				t2->next = tmp->next;
			}
			free(tmp);
			return;
		}
		t2 = tmp;
		tmp = tmp->next;
	}
}
