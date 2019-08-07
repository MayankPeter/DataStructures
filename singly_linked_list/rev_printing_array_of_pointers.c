#include"header.h"
void rev_print_array_ptr(SLL *ptr)
{
SLL **p;
int c = count(ptr),i;
p = malloc((sizeof(SLL *))*c);

i=0;
while(ptr)
{
p[i++] = ptr;
ptr = ptr->next;
}

for(i=c-1;i>=0;i--)
{
printf("%d %s %f\n",p[i]->rollno, p[i]->name, p[i]->marks);
}

}
