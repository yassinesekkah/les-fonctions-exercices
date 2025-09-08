#include <stdio.h>
int minimum(int x, int y)
{
    int min;
    if (x > y){
        min = y;
    }
    else{
        min = x;
    }
    return min;
}
int main()
{
    int x, y, min;

    printf("Entrez le nombre x : \n");
    scanf("%d", &x);
    printf("Entrez le nombre y : \n");
    scanf("%d", &y);

    min = minimum(x, y);

    printf("Le nombre le plus petit est : %d", min);

    return 0;
}