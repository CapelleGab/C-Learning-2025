#include <stdio.h>
#include <string.h>

int main() {
  char mdp[20];
  const char mot_de_passe[] = "secret";

  do {
    printf("Entrez votres mot de passe : ");
    scanf("%s", mdp);

    if (strcmp(mdp, mot_de_passe) != 0) {
      printf("Mot de passe incorrect \n");
    }
  } while (strcmp(mdp, mot_de_passe) != 0);

  printf("Accès autorisé. \n");
  return 0;
}
