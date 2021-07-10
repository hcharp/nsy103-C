#include <stdio.h>

char ERREUR[] = "FATAL SYSTEM ERROR PANIC CODE x131ds35zefdsf31sc0sx3c1ds2c0ds3f";

void calcimc(float imc, float imcmin, float imcmax)
{
    char maigre[] = "Mangez plus gras, plus sucré, plus salé, bougez moins";
    char ok[] = "Vous êtes une personne parfaite, ne changez rien";
    char surpoids[] = "C'est pas vous, c'est la société et les lobbies mais attention à votre coeur";


    if (imc<imcmin)
        printf("%s", maigre);
    else if (imc>=imcmin && imc<=imcmax)
        printf("%s", ok);
    else if (imc>imcmax)
        printf("%s", surpoids);
    else
        printf("%s", ERREUR);
    
}

int main()
{    
    printf("Démarrage du programme de calcul de l'IMC... ");

    printf("Votre poids. En kg. Maintenant. ");
    float masse = 0;
    scanf("%f",&masse);
    fflush(stdin);

    printf("Votre taille. En mètres. Attention, pas de virgule, mais un POINT : ex : 1.58 ");
    float taille = 0;
    scanf("%f",&taille);
    fflush(stdin);

    printf("Votre âge. En années, pas en minutes. ");
    float age = 0;
    scanf("%f",&age);
    fflush(stdin);

    float imc = 0;
    imc = masse/(taille*taille);
    printf("%f", imc);

    float agemin = 16;
    float agemax = 49;
    float imcmin = 0;
    float imcmax = 0;

    if (age<agemin)
    {   imcmin = 17;
        imcmax = 27.3;
        calcimc(imc, imcmin, imcmax);
    }

    else if (age>=agemin && age<=agemax)
    {   imcmin = 19;
        imcmax = 23;
        calcimc(imc, imcmin, imcmax);
    } 

    else if (age>agemax)
    {   imcmin = 20;
        imcmax = 21.5;
        calcimc(imc, imcmin, imcmax);
    }

    else
        printf("%s", ERREUR);
   

}