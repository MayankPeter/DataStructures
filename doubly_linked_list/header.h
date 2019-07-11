#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee
{
struct employee *prev;
char name[20];
int year;
float salary;
struct employee *next;
}DLL;

DLL *hptr;

void add_begin_dll(void);
void print(void);
void rev_print_dll(void);

#endif
