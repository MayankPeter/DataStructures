#include"header.h"
void main()
{
char ch;
do
{
add_begin_cdll();

printf("Do you want to add another datbase\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');


display();
}
