#include"header.h"
void print(void)
{
DLL *p = hptr;
while(p)
{
printf("%s %d %f\n",p->name, p->year, p->salary);
p = p->next;
}

}
