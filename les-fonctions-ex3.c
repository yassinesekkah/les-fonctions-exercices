#include <stdio.h>
int maximum(int x, int y){                    //declaration de la fonction

    int max;

    if(y < x){                          //la fontion formule
        max = x;
    }
    else{
        max = y;
    }
    return max;
}

int main()
{
    int a, b, maxi;

    printf("Entrez le nombre a : \n");
    scanf("%d", &a);
    printf("Entez le nombre b : \n");
    scanf("%d", &b);

    maxi = maximum(a, b);                 //l'appel de la fonction et scanee le resultat en int maxi

    printf("le nombre le plus grand est %d", maxi);

    return 0;
}