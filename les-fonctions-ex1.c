#include <stdio.h>

int sum(int a, int b)                     // declaration de la fonction
{
    int somme;
    somme = a + b;                     // lkhadma likadir lfonction
    return somme;                     // return result
}

int main()
{
    int a, b, somme;

    printf("entrez le nombre a : \n");
    scanf("%d", &a);
    printf("entrez le nombre b : \n");
    scanf("%d", &b);

    somme = sum(a, b);                 // l'appelle la fonction we3tina result dyalha lel variable somme

    printf("la somme de %d + %d est : %d", a, b, somme);

    return 0;
}