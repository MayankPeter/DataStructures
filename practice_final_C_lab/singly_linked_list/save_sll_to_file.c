#include"header.h"
void save_file(SLL *ptr)
{
FILE *fp = fopen("file","w");

while(ptr)
{
fprintf(fp,"%d %s %f ",ptr->hno, ptr->name, ptr->bill);
ptr = ptr->next;
}
}
