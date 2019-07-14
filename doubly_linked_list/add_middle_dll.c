#include"header.h"
void add_middle_dll()
{
DLL *new = malloc(sizeof(DLL));
printf("Enter Employee name , year of joining and salary\n");
scanf(" %s%d%f",new->name, &new->year, &new->salary);

if((hptr==0) || (hptr->salary)>(new->salary))
{
	if(hptr)
	{
		new->next = hptr;
		new->prev = hptr->prev;
		hptr->prev = new;
		hptr = new;
	}
	else
	{
		new->next = new->prev =  hptr;
		hptr = new;
	}
}
else
{
	DLL *lst_less = hptr;
	while((lst_less->next!=0) && (lst_less->next->salary)<(new->salary))
	{
		lst_less = lst_less->next;
	}

	new->next = lst_less->next;
	new->prev = lst_less;

	if(lst_less->next)
		lst_less->next->prev = new;

	lst_less->next = new;
}
}
