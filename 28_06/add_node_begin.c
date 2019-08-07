#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
int rollno;
char name[15];
float marks;
struct student *next;
}STU;
void add_begin(STU **);
void print(STU *);
void main()
{
STU *hptr = 0;
char ch;
do
{
add_begin(&hptr);
printf("Do you want to add another data Y or N\n");
scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');

print(hptr);
}

void add_begin(STU **ptr)
{
STU *new=malloc(sizeof(STU));
printf("Enter student rollno, name & marks\n");
scanf(" %d%s%f",&new->rollno,new->name,&new->marks);

new->next = *ptr;
*ptr = new;
}

void print(STU *ptr)
{
while(ptr)
{
printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->marks);
ptr=ptr->next;
}
}
