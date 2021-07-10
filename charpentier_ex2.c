#include <stdio.h>

int main() {
    
    printf("Démarrage du programme de conversion dollars/euros...");
    /* Prévoir deux cas : dollars ou euros
    Donc séparer la valeur de la devise */

    /* Initialisation des variables valeur et devise */
    float valeur = 0;
    char devise = 'E'; // pas de type string en C, seulement des char
    float valeur_convertie = 0;
    char devise_convertie;
    
    /* Les taux de conversion dollars en euros et e en d */
    float dene = 1.11792;
    float eend = 0.894521;

    /* On communique avec le user */
    printf("Argent. Combien.\n");
    scanf("%f",&valeur);
    printf("Merci. Quelle devise ? Type D pour des dolls, type E pour de l'argent d'chez nous \n");
    /* Attention à vider le buffer !! */
    fflush(stdin);    /* stdin est un fichier de lecture */
    scanf("%c",&devise);
    printf("C'est bien.\n");

    /* C'est ici que ça se gâte : on convertit, selon les deux cas */
    if (devise == 'D') { // PENSER AUX {}
        // convertir de dolls en euros
        valeur_convertie = valeur*dene;
        devise_convertie = 'E';
    }
    if (devise == 'E') {
        // bah l'inverse quoi
        valeur_convertie = valeur*eend;
        devise_convertie = 'D';
    }

    printf("Ça vous fait %.2f %c\n", valeur_convertie, devise_convertie);


    return 0;
}
