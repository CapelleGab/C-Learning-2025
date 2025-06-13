#include <stdio.h>

int main(void) {
  int x = 50;
  int *p = &x;

  printf("La valeur de x est %d \n", *p);

  *p = 100;
  printf("La valeur de x est %d \n", *p);

  return 0;
}