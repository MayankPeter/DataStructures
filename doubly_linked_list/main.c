#include"header.h"
void main()
{
char ch;
do
{
add_begin_dll();

printf("do you want to add another node\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');

//print();
rev_print_dll();

}

