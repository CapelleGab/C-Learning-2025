#include <stdio.h>

int main(void) {
  int nb;

  printf("Entrez un nombre : ");
  scanf("%d", &nb);

  if (nb % 2 == 0) {
    printf("Le nombre %d est paire \n", nb);
    return 1;
  }

  printf("Le nombre %d est impair \n", nb);
  return 0;
}