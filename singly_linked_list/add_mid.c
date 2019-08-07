#include"header.h"
void add_mid(SLL **ptr)
{
SLL *new = calloc(1,sizeof(SLL));
printf("Enter rollno, name & marks\n");
scanf(" %d%s%f",&new->rollno, new->name, &new->marks);

if((*ptr==0) || (new->rollno)<((*ptr)->rollno))
{
new->next = *ptr;
*ptr = new;
}
else
{
SLL *last = *ptr;
while((last->next!=0) && (last->next->rollno)<(new->rollno))
{
last = last->next;
}

new->next = last->next;
last->next = new;
}

}
