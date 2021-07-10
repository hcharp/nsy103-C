#include <stdio.h>


int main() {

    int nbr;
    char continuer = 'o';

    while (continuer == 'o')
    {
        printf("Entrez nombre ENTIER\n");
        scanf("%d", &nbr);
        if (nbr%2 ==0)
            printf("%d est pair\n", nbr);
        else if (nbr%2 != 0)
            printf("%d est impair\n", nbr);
            fflush(stdin);
        printf("Souhaitez-vous continuer ? o/n\n");
        scanf("%c", &continuer);
    }
}