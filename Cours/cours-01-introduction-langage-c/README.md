# 🧠 Cours 1 – Introduction au langage C

## 🎯 Objectifs

- Comprendre ce qu’est le langage C
- Configurer un projet C simple
- Compiler, exécuter un programme
- Utiliser les types de base
- Manipuler les entrées/sorties avec `printf` et `scanf`

---

## 📦 Structure minimale d’un programme C

```c
#include <stdio.h>

int main() {
    printf("Hello, monde bas niveau !\n");
    return 0;
}
```

- `#include <stdio.h>` : inclusion de la bibliothèque standard d'entrée/sortie
- `main()` : point d'entrée du programme
- `return 0;` : fin du programme, 0 = succès

---

## 🧰 Compilation & exécution

### Compilation :
```bash
## Avec auto execution
gcc -Wall -Wextra -Werror main.c && ./a.out    
## Sans auto execution 
gcc -Wall -Wextra -Werror main.c
```

### Exécution :
```bash
./a.out
```

---

## 🔤 Types de base

| Type | Description          | Exemple       |
|------|----------------------|---------------|
| `int` | Entier signé        | `int x = 42;` |
| `char` | Caractère ASCII     | `char c = 'A';` |
| `float` | Décimal simple     | `float f = 3.14f;` |
| `double` | Décimal double    | `double d = 3.14;` |

---

## 🧪 Entrées et sorties

```c
int age;
printf("Quel est ton âge ? ");
scanf("%d", &age);
printf("Tu as %d ans !\n", age);
```

- `%d` : format pour entier signé
- `&age` : on passe l’adresse de la variable à `scanf`

---

## 🧠 Spécificateurs de format (`printf` / `scanf`)

| Spécificateur | Type             | Description              |
|---------------|------------------|--------------------------|
| `%d`          | `int`            | Entier signé             |
| `%u`          | `unsigned int`   | Entier positif           |
| `%f`          | `float` / `double` | Nombre décimal         |
| `%c`          | `char`           | Caractère                |
| `%s`          | `char[]`         | Chaîne de caractères     |
| `%x` / `%X`   | `int`            | Hexadécimal              |
| `%p`          | Pointeur         | Adresse mémoire          |

---

## 🧠 Exercice : Table de multiplication

Écrire un programme qui :

1. Demande un entier à l’utilisateur
2. Affiche la table de multiplication de 1 à 10 pour cet entier

### 💡 Exemple de sortie :
```
Entrez un entier : 3
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
```

---

## ✅ Pour aller plus loin

- Lire la mémoire en hexadécimal
- Observer le binaire avec GDB
- Commencer à manipuler les pointeurs

---

## 📁 Fichiers fournis

- `main.c` : fichier de démonstration
- `table.c` : exercice à faire
