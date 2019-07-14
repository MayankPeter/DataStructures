#include"header.h"
void delete_begin_dll(void);
void delete_end_dll(void);
void delete_year_dll(void);

void delete_node_dll(void)
{
	int n;
	char ans;
	printf("Do you want to delete a node?\n");
	scanf(" %c",&ans);
	
	printf("\n");
	print();	

	while(ans=='Y' || ans=='y')
	{	
		printf("which node you want to delete?\n1) first node\n2) last node\n3)enter year to delete\n");
		scanf(" %d",&n);
		
		switch(n)
		{
			case 1:delete_begin_dll();
			       break;
			case 2:delete_end_dll();
			       break;
			case 3:delete_year_dll();
			       break;
			default:printf("Invalid Option Selected\n");
		}
		print();
		printf("Do you want to delete another node?\n");
		scanf(" %c",&ans);
	}


}

void delete_begin_dll(void)
{
	DLL *tmp = hptr;
	hptr->next->prev = tmp->prev;
	hptr = hptr->next;
	free(tmp);
}

void delete_end_dll(void)
{	
	if(hptr->next==0)
	{
	free(hptr);
	return;
	}
	DLL *last = hptr;
	while(last->next)
	{
		last = last->next;
	}
	last->prev->next = last->next;
	free(last);
}


void delete_year_dll(void)
{
	if(hptr==0)
	{
	printf("Empty doubly linked list\n");
	return;
	}
	DLL *tmp = hptr;
	int yr;
	printf("Enter the year whose database to be deleted\n");
	scanf(" %d",&yr);

	while((tmp->year)!=yr)
	{
		tmp = tmp->next;
	}
	if((tmp->prev)==0 && tmp->next!=0)
	{
	delete_begin_dll();
	}
	else if(tmp->next==0 && tmp->prev!=0)
	{
	delete_end_dll();
	}
	else if(tmp->prev==0 && tmp->next==0)
	{
	free(hptr);
	printf("Doubly Linked list emptied\n");
	}
	else
	{
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	}
}
