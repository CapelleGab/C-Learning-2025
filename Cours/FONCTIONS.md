# 📚 Fonctions Utiles en C Standard

Ce document te présente les fonctions **standard** les plus utiles du langage **C**, organisées par **bibliothèque**, avec un **exemple d'utilisation concret** pour chacune.

---

## 📘 1. `<stdio.h>` – Standard Input / Output

| Fonction       | Description                        | Exemple |
|----------------|------------------------------------|---------|
| `printf()`     | Affiche du texte                   | `printf("Bonjour !\\n");` |
| `scanf()`      | Lit l’entrée clavier               | `scanf("%d", &x);` |
| `puts()`       | Affiche une ligne (avec retour)    | `puts("Bienvenue !");` |
| `gets()` ⚠️    | Lit une ligne (⚠️ à éviter)        | `gets(buffer);` |
| `fopen()`      | Ouvre un fichier                   | `FILE *f = fopen("test.txt", "r");` |
| `fclose()`     | Ferme un fichier                   | `fclose(f);` |
| `fgets()`      | Lit une ligne depuis un fichier    | `fgets(buf, 100, f);` |
| `fprintf()`    | Écrit formaté dans un fichier      | `fprintf(f, "Valeur : %d", x);` |

---

## 📘 2. `<stdlib.h>` – Standard Library

| Fonction       | Description                         | Exemple |
|----------------|-------------------------------------|---------|
| `malloc()`     | Alloue dynamiquement de la mémoire  | `int *p = malloc(10 * sizeof(int));` |
| `free()`       | Libère la mémoire                   | `free(p);` |
| `atoi()`       | Convertit une chaîne en entier      | `int x = atoi("123");` |
| `exit()`       | Quitte immédiatement le programme   | `exit(1);` |
| `system()`     | Lance une commande système          | `system("cls");` ou `system("clear");` |

---

## 📘 3. `<string.h>` – Manipulation de chaînes

| Fonction         | Description                          | Exemple |
|------------------|--------------------------------------|---------|
| `strlen()`        | Longueur d'une chaîne               | `int len = strlen("test");` |
| `strcpy()`        | Copie une chaîne                    | `strcpy(dest, src);` |
| `strncpy()`       | Copie avec limite                   | `strncpy(dest, src, 5);` |
| `strcat()`        | Concatène deux chaînes              | `strcat(s1, s2);` |
| `strcmp()`        | Compare deux chaînes                | `strcmp("a", "b");` |
| `strchr()`        | Cherche un caractère                | `strchr(str, 'x');` |
| `strstr()`        | Cherche une sous-chaîne             | `strstr(str, "abc");` |

---

## 📘 4. `<math.h>` – Fonctions mathématiques

| Fonction     | Description                        | Exemple |
|--------------|------------------------------------|---------|
| `sqrt()`     | Racine carrée                      | `sqrt(25.0);` |
| `pow()`      | Puissance                          | `pow(2, 3); // 8` |
| `abs()`      | Valeur absolue (entier)            | `abs(-5);` |
| `fabs()`     | Valeur absolue (flottant)          | `fabs(-5.1);` |
| `ceil()`     | Arrondi supérieur                  | `ceil(2.1); // 3.0` |
| `floor()`    | Arrondi inférieur                  | `floor(2.9); // 2.0` |

---

## 📘 5. `<ctype.h>` – Fonctions de caractères

| Fonction     | Description                        | Exemple |
|--------------|------------------------------------|---------|
| `isalpha()`  | Est une lettre                     | `isalpha('a');` |
| `isdigit()`  | Est un chiffre                     | `isdigit('3');` |
| `islower()`  | Est une minuscule                  | `islower('x');` |
| `isupper()`  | Est une majuscule                  | `isupper('X');` |
| `tolower()`  | Convertit en minuscule             | `tolower('A');` |
| `toupper()`  | Convertit en majuscule             | `toupper('b');` |

---

## 📘 6. `<time.h>` – Temps et date

| Fonction     | Description                        | Exemple |
|--------------|------------------------------------|---------|
| `time()`     | Temps actuel (timestamp)           | `time(NULL);` |
| `localtime()`| Convertit en heure locale          | `localtime(&t);` |
| `clock()`    | Temps CPU écoulé                   | `clock_t start = clock();` |

---

## 📘 7. `<stdbool.h>` – Booléens (C99+)

| Constantes | Description       |
|------------|------------------|
| `true`     | Vrai (1)         |
| `false`    | Faux (0)         |

```c
#include <stdbool.h>
bool actif = true;
if (actif) {
    printf("Actif !\\n");
}
