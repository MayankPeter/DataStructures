#include"header.h"
void main()
{
char ch;
do
{
add_begin_dll();
//add_end_dll();
//add_middle_dll();

printf("do you want to add another node\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');

//rev_link_dll();
delete_node_dll();
print();
//rev_print_dll();

}

