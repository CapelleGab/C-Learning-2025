#include <stdio.h>
#include <stdlib.h>

int main() {
  int *tab = (int*)malloc(3 * sizeof(int)); // Allocation dynamique
  if (tab == NULL) {
    printf("Erreur allocation mémoire\n");
    return 1;
  }

  tab[0] = 5;
  tab[1] = 10;
  tab[2] = 15;

  printf("Valeurs du tableau alloué dynamiquement :\n");
  for (int i = 0; i < 3; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  free(tab); // Libération de la mémoire
  return 0;
}
