#include <stdio.h>
#define CONSTANTE1 100
const int CONSTANTE2 = 10 ;

int main( void )
{
    int tab2[4]={11,13,17,19};
    const int CONSTANTE3 = 31 ;
    int tab1[4]={1,2,3,5};
    int v1 = 7;
    int v2 = 9;
    


    printf("\n\n1.\n");
    // lvalue : ce qui est à gauche du '='
    // printf("%", &CONSTANTE1);
    // ne fonctionne pas car CONSTANTE1 n'est pas une constante mais un define
    // il ne fait que REMPLACER dans le code par une sorte de précompilateur (préprocesseur)
    // => pas d'adresse pour CONSTANTE1

    printf("%p, %d\n\n", &CONSTANTE2, &CONSTANTE2);  //p pour ppppppointeur
    printf("%p\n\n", &CONSTANTE3);

    // On voit que les adresses des variables globales sont plus vers le début
    // et que les variables locales sont plus rapprochées
    // Cela peut s'expliquer par le fait que les variables globales sont 
    // un peu comme des variables d'environnement du programme, finalement !

    // CONSTANTE1 = 0; ERREUR : 100 = 0
    // CONSTANTE2 = 0; ERREUR : non modifiable
    // CONSTANTE3 = 0; ERREUR : non modifiable


    printf("\n\n2.\n");
    // écrire à une adresse exacte : 
    // int *mouette = &CONSTANTE2;
    // *mouette = 2;
    // printf("%p\n, %d\n\n", &CONSTANTE2, &CONSTANTE2);

    // hmm... intéressant, cela ne fonctionne pas et renvoie une erreur BUS

                    //     .---------------------------.
                    //    /,--..---..---..---..---..--. `.
                    //   //___||___||___||___||___||___\_|
                    //   [j__ ######################## [_|
                    //      \============================|
                    //   .==|  |"""||"""||"""||"""| |"""||
                    //  /======"---""---""---""---"=|  =||
                    //  |____    []*          ____  | ==||
                    //  //  \\               //  \\ |===||  hjw
                    //  "\__/"---------------"\__/"-+---+'

    int *mouette = &CONSTANTE3;
    *mouette = 2;
    printf("%p, %d, %p, %d\n\n", &CONSTANTE3, CONSTANTE3, mouette, *mouette);
    // ça marche car pas variable globale mais bon c'est pas vraiment la bonne valeur
    // POURTANT MAIS OLALA C'EST LA MÊME ADRESSE C'EST À N'Y RIEN COMPRENDRE


    printf("\n\n3.1\n");
    for (int i=0; i<10; i++)
        {
            printf("%d, adresse : %p\n", tab1[i], &tab1[i]);
        }
    // Comme le tableau ne fait que 4, les 4 premiers résultats sont ok puis ensuite
    // c'est vraiment n'importe quoi : c'est ce qu'il y a en mémoire à ces endroits-là

    printf("\n\n3.2\n");
    for (int j=-10; j<10; j++)
        {
            printf("%d, adresse : %p\n", tab2[j], &tab2[j]);
        }
    // Un peu comme la question précédente : tout ce qui est en dehors du tableau 
    // est ce qui est déjà dans la mémoire
    // Trop rigolo : on voit avec les valeurs et les adresses que le tableau tab1 
    // est à la suite du tableau tab2
    // 13, adresse : 0x7ffee6c1c824
    // 17, adresse : 0x7ffee6c1c828
    // 19, adresse : 0x7ffee6c1c82c
    // 1, adresse : 0x7ffee6c1c830
    // 2, adresse : 0x7ffee6c1c834
    // 3, adresse : 0x7ffee6c1c838
    // 5, adresse : 0x7ffee6c1c83c

    printf("\n\n3.3\n");

    // Très intéressant : c'est inversé !
    // Peut-être alors que les variables sont entrées en mémoire dans l'ordre
    // décroissant des adresses !

    printf("\n\n4.\n");
    // 64 : on le voit avec la taille de l'adresse
    // la différence entre 32 et 64 c'est le nombre d'adresses
    // indexables
    // ici 0x7ffee6c1c83c, par exemple, c'est beaucoup plus grand que 32 bits
    // 2^31 − 1 = 2,147,483,647
    // 0x7ffee6c1c83c = 140,732,769,880,124 et c'est vachement plus grand
}