#include"header.h"
void add_begin(SLL **ptr)
{
SLL *new = malloc(sizeof(SLL));
printf("Enter rollno, name & marks\n");
scanf(" %d%s%f",&new->rollno,new->name,&new->marks);

new->next = *ptr;
*ptr = new;
}
