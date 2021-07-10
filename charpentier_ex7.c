#include <stdio.h>
int main() {
    
    printf("Démarrage du programme de calcul de la moyenne...\n");
    float notes[10];
    float note;

    char choix = 'o';
    int i = 0;

    while (choix=='o')
    {
        printf("Entrez votre note\n");
        scanf("%f", &note);
        notes[i]=note;
        fflush(stdin);
        printf("Souhaitez-vous entrer une autre note? o/n \n");
        scanf("%c", &choix);
        i++;
        
    }

    float somme = 0;
    float moyenne = 0;

    int j =i--;
    while (j>0)
    {
        somme = somme + notes[j];
        j--;
    }

    moyenne = somme / i;
    printf("La moyenne d'Hélène est de %f", moyenne);


}