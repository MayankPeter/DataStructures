#include"header.h"
void delete_first(SLL ***);
void delete_last(SLL **);
void delete_n_node(SLL ***);

void delete_pos(SLL **ptr)
{
	int n;
	printf("1) Delete first node\n2) Delete last node\n3) Enter node pos to delete\n");
	scanf(" %d",&n);

	switch(n)
	{
		case 1: delete_first(&ptr);
			break;
		case 2: delete_last(ptr);
			break;
		case 3: delete_n_node(&ptr);
			break;
	}
}

void delete_first(SLL ***ptr)
{
	SLL *tmp = **ptr;
	**ptr = tmp->next;
	free(tmp);
}

void delete_last(SLL **ptr)
{
	SLL *tmp = *ptr;
	SLL *t2;
	while(tmp->next)
	{
		t2 = tmp;
		tmp = tmp->next;
	}
	t2->next = tmp->next;
	free(tmp);
}

void delete_n_node(SLL ***ptr)
{
	SLL *t2;
	SLL *tmp = **ptr;
	int n,i,c;
	printf("Enter the node position to delete\n");
	scanf(" %d",&n);
	n=n-1;
	c = count_nodes(**ptr);
	printf("count=%d\n",c);

	if(n==0)
	{
		SLL *tmp = **ptr;
		**ptr = tmp->next;
		free(tmp);
		return;
	}


	for(i=0;i<c;i++)
	{
		if(i==n)
		{
			t2->next = tmp->next;
			free(tmp);
			return;
		}
		t2 = tmp;
		tmp = tmp->next;
	}
}
