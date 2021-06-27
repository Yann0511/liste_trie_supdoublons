#include"liste.h"

int main(void)
{
  struct liste *l = create();

  printf("\n Insertion des éléments\n");
  insert(l, 3);
  insert(l, 2);
  insert(l, 3);
  insert(l, 1);
  insert(l, 5);
  insert(l, 8);
  insert(l, 7);
  insert(l, 2);
  
  print_liste(l);

  printf("\n Trie des éléments\n");
  trier_liste(l);

  print_liste(l);

  printf("\n Suppression des doublons\n");
  delete_doublon(l);

  print_liste(l);
    
}
