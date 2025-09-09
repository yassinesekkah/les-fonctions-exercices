#include <stdio.h>
#include <string.h>

int est_pair (int nombre){       //declaration de la fonction
    
    if(nombre%2 == 0) return 1;     // formule avec la formule bach n3arfo wach pair ou non
    else{ return 0;}
}
int main(){
    int n, res;

    printf("Entrez un nombre n : \n");
    scanf("%d", &n);
 
    res = est_pair(n);           //l'appel de la fonction

    if (res == 1) printf("Le nombre %d est pair", n);            //print result de la fonction
    if (res == 0) printf("Le nombre %d est impair", n);


    return 0;
}