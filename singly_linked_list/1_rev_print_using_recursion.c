#include"header.h"
void rev_print_rec(SLL *ptr)
{
if(ptr)
{
rev_print_rec(ptr->next);
printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->marks);
}

}
