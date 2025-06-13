#include <stdio.h>
#include <string.h>

int main(void) {
  int *p = NULL;
  if (p == NULL) {
    printf("ERREUR : Pointeur NULL, opération impossible");
  } else {
    *p = 10; // Ne sera jamais executé ici
  }
  return 0;
}