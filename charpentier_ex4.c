#include <stdio.h>

#define NB_REP 4
#define CHAINE_MAX 100

int main() {
    
    int total = 0;
    int reponse = 0;

    printf("Question 1\n1 - rep1\n2 - rep2\n3 - rep3\n4 - rep4\n");
    scanf("%d",&reponse);
    if (reponse==3) {
        total++;
        printf("+1 point\n");
    }
    else {
        printf("Dommage.\n");
    }
    printf("Question 2\n1 - rep1\n2 - rep2\n3 - rep3\n4 - rep4\n");
    scanf("%d",&reponse);
    if (reponse==2) {
        total++;
        printf("+1 point\n");
    }
    else {
        printf("Dommage.\n");
    }
    printf("Question 3\n1 - rep1\n2 - rep2\n3 - rep3\n4 - rep4\n");
    scanf("%d",&reponse);
    if (reponse==3) {
        total++;
        printf("+1 point\n");
    }
    else {
        printf("Dommage.\n");
    }
    printf("Question 4\n1 - rep1\n2 - rep2\n3 - rep3\n4 - rep4\n");
    scanf("%d",&reponse);
    if (reponse==2) {
        total++;
        printf("+1 point\n");
    }
    else {
        printf("Dommage.\n");
    }
printf("Votre score est de %d points", total);

}
