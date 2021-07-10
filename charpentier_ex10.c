#include <stdio.h>

int main()
{
    char oui[] = "bissextile";
    char non[] = "pas bissextile";
    int annee;

    printf("Entrez année \n");
    scanf("%d",&annee);

    if(annee % 4 == 0)
    {
        if( annee % 100 == 0)
        {
            if ( annee % 400 == 0)
                printf("%d %s", annee, oui);
            else
                printf("%d %s", annee, non);
        }
        else
            printf("%d %s", annee, oui);
    }
    else
        printf("%d %s", annee, non);

}