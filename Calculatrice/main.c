#include <stdio.h>

int main(void) {
  // fonction fgets()  // Lire l'entrée utilisateur
  // fonction sscanf() // Analyse l'entrer
  char input[100];
  double num1, num2, result;
  char operator;

  printf("Entrez une expression (ex: 3 + 4) : ");
  fgets(input, sizeof(input), stdin);

  sscanf(input, "%lf %c %lf", &num1, &operator, &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;
    
    case '*':
      result = num1 * num2;
      break;
    
    case '/':
      if (num2 != 0) {
        result = num1 / num2;
      } else {
        printf("Erreur : Division par zéro. \n");
        return 1;
      }
      break;

    default:
      printf("Opérateur non valide.\n");
      return 1;
  }

  printf("Le résultat est : %.2f\n", result);
  return 0;
}