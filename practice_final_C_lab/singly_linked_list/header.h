#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct hosp
{
int hno;
char name[20];
float bill;
struct hosp *next;
}SLL;

void print(SLL *);
void add_begin(SLL **);
void add_end(SLL **);
void add_middle(SLL **);
int count_nodes(SLL *);
void save_file(SLL *);
void rev_print_rec(SLL *);
void rev_print_iter(SLL *);
void rev_print_arr_ptrs(SLL *);
void rev_data(SLL *);
void rev_link_arr_ptr(SLL **);
void rev_link_3_ptr(SLL **);
void delete_node_data(SLL **);
void delete_pos(SLL **);
#endif
