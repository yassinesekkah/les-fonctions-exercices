#include <stdio.h>

void fibonacci(int n)                       //declaration de la fonction avec void
{
    int a = 0, b = 1, i, suivant;             

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);               //7it void sans retour kandiro l prit wastha
        suivant = a + b;
        a = b;
        b = suivant;                    //la formulat de la fonction
    }
}

int main()
{
    int n;

    printf("Entrez le nombre n : \n");
    scanf("%d", &n);

    printf("Suite Fibonacci jusqu'a %d est : ", n);

    fibonacci(n);                                         //l'appel de la fonction     

    return 0;
}