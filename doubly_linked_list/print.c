#include"header.h"
void print(void)
{
int i=1;
DLL *p = hptr;
while(p)
{
printf("%d->) %s %d %f\n",i++,p->name, p->year, p->salary);
p = p->next;
}

}
