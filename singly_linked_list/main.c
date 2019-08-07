#include"header.h"
void main()
{
SLL *hptr = 0;
char ch;
do
{
add_begin(&hptr);
//add_end(&hptr);
//add_mid(&hptr);

printf("Do you want to add another node? Y/N\n");
scanf(" %c",&ch);
}while(ch=='Y' || ch=='y');

//rev_data(hptr);
//rev_link(&hptr);
//rev_link_3_ptrs(&hptr);
print(hptr);
delete_all_nodes(&hptr);
print(hptr);
//printf("\n");
//rev_print_iter(hptr);
//rev_print_rec(hptr);
//rev_print_array_ptr(hptr);
}
