#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct database
{
struct database * prev;
float temp;
char city[20];
int pin;
struct database *next;
}CDLL;

CDLL *hptr;

void add_begin_cdll(void);
void display(void);

#endif
