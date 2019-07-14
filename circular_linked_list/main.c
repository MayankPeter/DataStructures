#include"header.h"
void main()
{
CLL *head = 0;
char ans;
do
{
add_begin_cll(&head);

printf("Do you want to add another passenger details?\n");
scanf(" %c",&ans);
}while(ans=='y' || ans=='Y');

display(head);
}
