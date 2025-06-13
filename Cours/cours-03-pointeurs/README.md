# 🇨🇷 Cours 4 – Les Pointeurs en C

---

## 🧠 Objectif du cours

Comprendre ce que sont les **pointeurs** en C, comment les utiliser, les manipuler et pourquoi ils sont essentiels dans la programmation bas niveau.

---

## 🔎 1. Qu'est-ce qu'un pointeur ?

Un **pointeur** est une variable spéciale qui **contient une adresse mémoire** plutôt qu'une valeur directe.

Exemple :
```c
int x = 42;
int *p = &x;
```
- `x` contient la valeur `42`
- `p` contient l'adresse mémoire de `x`

---

## ⚖️ 2. Pourquoi utiliser des pointeurs ?

- Accéder directement à la mémoire
- Partager des données entre fonctions (passage par référence)
- Manipuler des structures dynamiques (malloc, tableaux dynamiques...)

---

## 🔧 3. Syntaxe de base

### a) Déclaration d'un pointeur
```c
int *p;
```
> Un pointeur vers un int

### b) Initialisation
```c
int x = 5;
p = &x; // p contient l'adresse de x
```

### c) Déréférencement
```c
int y = *p; // accède à la valeur pointée par p
*p = 10;   // modifie la valeur de x via p
```

---

## 🏛️ 4. Mémoire et pointeurs

Chaque variable vit à une adresse mémoire.
```c
printf("Adresse de x : %p", (void*)&x);
```

Un pointeur vers `int`, `char`, `float`... occupe en général 4 ou 8 octets.

---

## ➕ 5. Arithmétique des pointeurs

```c
p++; // passe à l'adresse du prochain int (p + sizeof(int))
```
Utilisable quand on manipule des tableaux ou blocs alloués dynamiquement.

---

## ⛔️ 6. Pointeur NULL

```c
int *p = NULL; // pointeur qui ne pointe nulle part
```
Toujours vérifier qu'un pointeur est non NULL avant d'y accéder.

---

## 👁️ 7. Tableaux et pointeurs

Un tableau est un pointeur constant vers son premier élément.
```c
int tab[3] = {1, 2, 3};
int *p = tab;
printf("%d", *(p + 1)); // accès au 2ème élément
```

---

## 🔗 8. Passage par adresse

```c
void increment(int *val) {
    (*val)++;
}

int x = 5;
increment(&x); // x devient 6
```

---

## 🧳 9. Exemple complet
```c
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("Adresse de x = %p\n", (void*)&x);
    printf("Contenu de p = %p\n", (void*)p);
    printf("*p = %d\n", *p);

    *p = 20;
    printf("Nouvelle valeur de x = %d\n", x);
    return 0;
}
```

---

## ✅ 10. À retenir

| Notion         | Description |
|----------------|-------------|
| `*p`           | Déréférencement : accès à la valeur pointée |
| `&x`           | Adresse de la variable `x` |
| `int *p`       | Déclare un pointeur vers int |
| `p = &x`       | `p` pointe vers `x` |
| `p[i]`         | équivaut à `*(p + i)` |
| `NULL`         | Pointeur vide |
| `free(p)`      | Libère la mémoire allouée dynamiquement |

Souhaites-tu passer maintenant à la pratique avec des exercices progressifs sur les pointeurs ?

