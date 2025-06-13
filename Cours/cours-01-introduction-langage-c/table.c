#include <stdio.h>

int main(void) {
  int entier;
  printf("Entrez un entier : ");
  scanf("%d", &entier);
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n", entier, i, entier * i);
  }
  return 0;
}
