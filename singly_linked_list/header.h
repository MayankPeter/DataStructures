#ifndef HEADER_H	
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
int rollno;
char name[20];
float marks;
struct student *next;
}SLL;

void add_begin(SLL **);
void add_end(SLL **);
void print(SLL *);
void add_mid(SLL **ptr);
int count(SLL *);
void rev_print_rec(SLL *);
void rev_print_iter(SLL *);
void rev_print_array_ptr(SLL *);
void rev_data(SLL *);

#endif
