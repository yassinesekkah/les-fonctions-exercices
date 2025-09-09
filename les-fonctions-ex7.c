#include <stdio.h>
#include <string.h>

void inverser(char str[]){
    int i, j;                               //declaration de la fonction inverser
    char temp;
    int n = strlen(str);                  // longueur de la chaine copinah f n bach 3la hsabo dor lboucle

    for(i=0, j=n-1; i<j; i++, j--){
        temp = str[i];                   //boucle kat invirse [0] m3a [n-1] moraha [1] m3a [n-2]... 
        str[i] = str[j];                 //hta kayetla9aw fel wast i w j
        str[j] = temp;
    }
}

int main()
{
    char chaine[50];

    printf("Entrez un mot : \n");
    scanf("%s", chaine);

    printf("le mot avant l'inverse est : %s \n", chaine);

    inverser(chaine);                          //l'appel de la fonction inverser

    printf("Le mot apres l'inverse est : %s \n", chaine);

    return 0;
}