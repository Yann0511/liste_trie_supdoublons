#ifndef  LISTE
#define LISTE

#include <stdio.h>
#include <stdlib.h>

struct element
{
     int value;
     struct element *next;
};

struct liste
{
     struct element *head;
};

struct liste *create();

void insert(struct liste*, int);

void trier_liste(struct liste *liste);

void delete_doublon(struct liste *liste);

void print_liste(struct liste *liste);

#endif
