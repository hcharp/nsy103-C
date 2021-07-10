#include <stdio.h>


int main() {
    
    printf("Démarrage du programme de quatre questions...");


    printf("Avez-vous pensé à vous hydrater ?\n1 : Oui\n2 : Prout\n3 : Bof !\n4 : Nope !\n");
    int reponse = 0;
    scanf("%d",&reponse);
    if (reponse==1) {
        printf("Parfait\n");
    }
    else {
        printf("C'est nul.\n");
    }

}
