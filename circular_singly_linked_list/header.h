#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct railway
{
char pname[20];
int age;
float bill;
struct railway *next;
}CLL;

void add_begin_cll(CLL **);
void add_end_cll(CLL **);
void display(CLL *);
int count_csll_nodes(CLL *);

#endif
