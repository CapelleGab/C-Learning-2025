#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ask_lenght_password();
char *generate_password(int longueur);

int main(void) {
  int lenght_password = ask_lenght_password();
  char *password = generate_password(lenght_password);
  printf("Le mot de passe est : %s\n", password);
  return 1;
}

int ask_lenght_password() {
  char input[10];
  int lenght;

  printf("Saississez une longueur de mot de passe (1, 2, 5, ...) \n");

  fgets(input, sizeof(input), stdin);
  lenght = atoi(input);

  return lenght;
}

char *generate_password(int longueur) {
  static char password[100];

  for (int i = 0; i < longueur; i++) {
    password[i] = 'a' + (rand() % 26);
  }

  password[longueur] = '\0';

  return password;
}
