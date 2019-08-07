#include"header.h"
void main()
{
SLL *hptr = 0;
int count;
char ch;
do
{
add_begin(&hptr);
//add_end(&hptr);
//add_middle(&hptr);
printf("Do you want to add another node\n");
scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');

//save_file(hptr);
//rev_print_rec(hptr);
//rev_print_iter(hptr);
//rev_print_arr_ptrs(hptr);
//rev_data(hptr);
//rev_link_arr_ptr(&hptr);
//rev_link_3_ptr(&hptr);
print(hptr);
//delete_node_data(&hptr);
delete_pos(&hptr);
print(hptr);
/*
count = count_nodes(hptr);
printf("\nnode count = %d\n",count);
*/
}
