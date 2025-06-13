# 🧠 Cours 2 – Conditions, Boucles et Logique en C

## 🎯 Objectifs du cours

Dans ce cours, tu vas apprendre à :

- **Prendre des décisions** avec `if`, `else if`, `else`
- **Répéter des instructions** avec `while`, `for`, `do...while`
- **Utiliser des opérateurs logiques** (`&&`, `||`, `!`)
- Écrire des **programmes interactifs intelligents`

---

## 🧱 I. Les **conditions** en C

### 🔍 Syntaxe de base

```c
if (condition) {
    // instructions si la condition est vraie
} else if (autre_condition) {
    // instructions si la 2e condition est vraie
} else {
    // instructions si aucune condition n’est vraie
}
```

### 💡 Exemple :

```c
int a = 10;

if (a > 5) {
    printf("a est plus grand que 5\n");
} else if (a == 5) {
    printf("a est égal à 5\n");
} else {
    printf("a est plus petit que 5\n");
}
```

### 📚 Opérateurs de comparaison

| Symbole | Signification           | Exemple      |
|---------|-------------------------|--------------|
| `==`    | est égal à              | `x == 5`     |
| `!=`    | est différent de        | `x != 3`     |
| `>`     | strictement supérieur à | `x > 10`     |
| `<`     | strictement inférieur à | `x < 20`     |
| `>=`    | supérieur ou égal à     | `x >= 5`     |
| `<=`    | inférieur ou égal à     | `x <= 8`     |

---

## 🔁 II. Les **boucles** en C

Les boucles permettent de **répéter des instructions automatiquement**.

### 1. La boucle `while`

```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

➡️ Affiche les nombres de 0 à 4

### 2. La boucle `do...while`

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

### 3. La boucle `for`

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

---

## 🔐 III. Opérateurs **logiques**

| Symbole | Nom logique | Signification                      | Exemple                       |
|---------|-------------|-------------------------------------|-------------------------------|
| `&&`    | ET          | Vrai si les deux conditions sont vraies | `x > 0 && x < 10`        |
| `||`    | OU          | Vrai si une condition est vraie     | `x == 1 || y == 2`           |
| `!`     | NON         | Inverse une condition (négation)    | `!(x == 0)` → `x != 0`       |

---

## 🧪 IV. Exercice simple : **pair ou impair**

```c
#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Nombre pair\n");
    } else {
        printf("Nombre impair\n");
    }
    return 0;
}
```

---

## 🔐 V. Exercice interactif : **mot de passe sécurisé**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char mdp[20];
    const char mot_de_passe[] = "secret";

    do {
        printf("Entrez le mot de passe : ");
        scanf("%s", mdp);
        if (strcmp(mdp, mot_de_passe) != 0) {
            printf("Mot de passe incorrect.\n");
        }
    } while (strcmp(mdp, mot_de_passe) != 0);

    printf("Accès autorisé.\n");
    return 0;
}
```
