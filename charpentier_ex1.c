#include <stdio.h>
int main() {
    
    printf("Démarrage du programme de calcul de la moyenne...\n");
    float notes[7] = {17.5, 12., 18.5, 14., 13., 15., 10.5} ;
    printf("Les notes sont : COMMENT AFFICHER UNE LISTE À PARTIR D'UN TABLEAU??\n");

    float somme = 0;
    float moyenne = 0;

    int i;
    for(i=0; i<7; i++) {
        somme = somme + notes[i];
    }

    moyenne = somme / i;
    printf("La moyenne d'Hélène est de %f", moyenne);

    return 0;
}