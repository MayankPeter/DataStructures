#include"header.h"
int count(SLL *ptr)
{
int cnt=0;
while(ptr)
{
cnt++;
ptr=ptr->next;
}

return cnt;
}
