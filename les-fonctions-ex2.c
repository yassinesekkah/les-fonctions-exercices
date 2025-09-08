#include <stdio.h>

int produit(int a, int b)                   //declaration la fonction
{
    int pro;
    pro = a * b;                         //fonction formule
    return pro;                         //return result
}

int main()
{
    int x, y, p;

    printf("Entrez le nombre x : \n");
    scanf("%d", &x);
    printf("Entrez le nombre y : \n");
    scanf("%d", &y);

    p = produit(x, y);                       //l'appel de la fonction et scan le resultat en le variable p

    printf("Le produit de %d * %d est : %d \n", x, y, p);

    return 0;
}