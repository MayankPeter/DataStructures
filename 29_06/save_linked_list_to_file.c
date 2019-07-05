#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int rollno;
	char name[15];
	float marks;
	struct student *next;
}STU;

void add_end(STU **);
void print(STU *);
void count_nodes(STU *);
void linked_list_file(STU *);

void main()
{
	STU *hptr = 0; 
	char ch;
	do{
		add_end(&hptr);

		printf("Do you want to add another student data\n");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');

	print(hptr);
	count_nodes(hptr);
	linked_list_file(hptr);

}

void add_end(STU **ptr)
{
	STU *new = malloc(sizeof(STU));
	printf("Enter student rollno, name & marks\n");
	scanf(" %d%s%f",&new->rollno, new->name, &new->marks);

	if(*ptr==0)
	{	new->next=*ptr;
		*ptr=new; 
	}
	else
	{
		STU *last = *ptr;
		while(last->next)
		{
			last = last->next;
		}
		new->next = last->next;
		last->next = new;
	}
}

void print(STU *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->marks);
		ptr = ptr->next;
	}
}

void count_nodes(STU *ptr)
{
	int count;
	while(ptr)
	{
		count++;
		ptr = ptr->next;
	}
	printf("\nno of nodes is %d\n",count);
}

void linked_list_file(STU *ptr)
{
	FILE *fp = fopen("data_linked_list","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr = ptr->next;
	}
}

