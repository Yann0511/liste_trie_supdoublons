#include"liste.h"

struct liste *create()
{
  struct liste *Liste = malloc(sizeof(struct liste));

  if(!Liste)
    {
      printf("\n Allocation echoué");
      return 0;
    }

  Liste->head = 0;

  return Liste;
}

void insert(struct liste *liste, int value)
{
  struct element* new = 0, *tmp;

  if(liste)
    {
      new = calloc(0, sizeof(struct element));
      new->value = value;
      new->next = 0;

      if(!liste->head)
	liste->head = new;

      else
	{
	  tmp = liste->head;

	  while(tmp->next != 0)
	    tmp = tmp->next;

	  tmp->next = new;
	}
    }

  return;
}

void trier_liste(struct liste *liste)
{
  struct element *tmp, *tmp1, *tmp2;
  int min;

  for(tmp = liste->head; tmp != 0; tmp = tmp->next)
    {
      /* tmp contien tjrs l'adresse du min */
      tmp2 = tmp;
      min = tmp->value;

      for(tmp1 = tmp->next; tmp1 != 0; tmp1 = tmp1->next)
	{
	  if(min > tmp1->value)
	    {
	      /* Je met dans tmp2 l'adresse du min */
	      tmp2 = tmp1;
	      min = tmp1->value;
	    }
	}
      /* Echange des deux éléments */
      tmp2->value = tmp->value;
      tmp->value = min;
    }

  return;
}


void delete_doublon(struct liste *liste)
{
  struct element *tmp, *tmp1, *prec;
  int val_actuelle;

  for(tmp = liste->head; tmp != 0; tmp = tmp->next)
    {
      val_actuelle = tmp->value;
      prec = tmp;
      
      for(tmp1 = tmp->next; tmp1 != 0; tmp1 = tmp1->next)
	{
	  if(tmp1->value == val_actuelle)
	    {
	      prec->next = tmp1->next;
	      free(tmp1);
	      tmp1 = prec;
	    }

	  else
	    prec = tmp1;
	}
    }

  return;
}

void print_liste(struct liste *liste)
{
  struct element *tmp;

  printf("\n============ Affichage du contenue de la liste===========\n");
  
  for(tmp = liste->head; tmp != 0; tmp = tmp->next)
    printf("%d \t", tmp->value);

  printf("\n");
  return;
}
