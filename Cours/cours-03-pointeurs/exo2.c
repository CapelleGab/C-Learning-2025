#include <stdio.h>

int main(void) {
  int tab[] = {10, 20, 30, 40, 50};
  int *p = tab;

  printf("Valeurs du tableau \n");
  for (int i = 0; i < 5; i++) {
    printf("%d", *(p + i));
  }
  printf("\n");

  *(p + 2) = 35;

  printf("Valeurs du tableau modifié \n");
  for (int i = 0; i < 5; i++) {
    printf("%d", tab[i]);
  }
  printf("\n");

  return 0;
}