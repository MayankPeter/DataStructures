#include<stdio.h>
int a[5], top=0, max=5;
void print(void);
int pop(void);
int push(int);

void main()
{
int o,n;
char ch;

l1:
printf("Please select an option\n1) push\n2) pop\n");
scanf(" %d",&o);
if(o==1)
{
printf("Enter the value to push\n");
scanf(" %d",&n);
do
{
push(n);
print();
printf("Do you want to push again?\n");
scanf(" %c",&ch);
if(ch=='y' || ch=='Y')
{
printf("Enter the value to push\n");
scanf(" %d",&n);
}
}while(ch=='y' || ch=='Y');
goto l1;
}

else if(o==2)
{
do
{
pop();
printf("\n");
print();
printf("Do you want to pop again?\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');

goto l1;
}
else
{
printf("Invalid Option selected\n");
goto l1;
}
}

int pop(void)
{
top--;
if(top==-1)
{
printf("\nStack Underflow\n");
}
}

int push(int num)
{
if(top==max)
{
printf("\nStack Overflow\n");
}
else
{
a[top] = num;
top++;
}
}

void print(void)
{
int i;
printf("\n");
for(i=top-1;i>=0;i--)
printf("%d\n",a[i]);
}
