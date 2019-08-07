#include"header.h"
void main()
{
CLL *head = 0;
char ans;
int c;
do
{
//add_begin_cll(&head);
add_end_cll(&head);

printf("Do you want to add another passenger details?\n");
scanf(" %c",&ans);
}while(ans=='y' || ans=='Y');

c=count_csll_nodes(head);
printf("node count = %d\n",c);

display(head);
}
