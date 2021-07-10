#include<stdio.h>

int main() {

    int x,y,xy,resultat;
    
    char continuer = 'o';
    while (continuer == 'o')
    {
        printf("Premier nombre entier positif ?\n");
        scanf("%d", &x);
        fflush(stdin);
        printf("Second nombre entier positif ?\n");
        scanf("%d", &x);
        fflush(stdin);

        printf(" = %d x %d", x, y);
        while (x>0)
        {
            if (x%2 ==0)
            {
                xy = (x/2)*(2*y);
                printf(" = %d x %d\n", x, xy);
                x/=2;
            }
            else
            {
                xy = (x-1) * y + y;
                printf(" = %d x %d + %d\n", x, xy, y);
                x--;
            }
        }
        printf("Souhaitez-vous continuer ? o/n \n");
        scanf("%c", &continuer);
        fflush(stdin);
    }

}