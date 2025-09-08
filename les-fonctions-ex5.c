#include <stdio.h>
    long long factorielle(int n){           //declaration le fonction
                               
    long long f = 1;

    if(n != 0){
        
        for(int i = 1; i <= n; i++) {               //cas principal
        f = i * f ;
        }  
    }
    else if(n == 0){                               //cas 0! 
        f = 1;
    }
    return f;

}
int main(){

    int nombre;
    long long facto;

    printf("Entrez un nombre : \n");
    scanf("%d", &nombre);

    facto = factorielle(nombre);             //l'appel de la fonction et scan result en le variable facto

    printf("La factorielle de %d! est : %lld", nombre, facto);

}