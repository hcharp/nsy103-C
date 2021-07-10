#include <stdio.h>

int main()
{
  char mot[100];
  int debut_mot, milieu_mot, fin_mot, taille_mot = 0;

  char oui[] = "est un palindrome.";
  char non[] = "n'est pas un emordnilap.";

  printf("Choisir un mot en minuscules\n");
  scanf("%s", mot);

  while (mot[taille_mot] != '\0')
    taille_mot++;

  fin_mot = taille_mot - 1;
  milieu_mot = taille_mot/2;

  for (debut_mot = 0; debut_mot < milieu_mot; debut_mot++)
  {
    if (mot[debut_mot] != mot[fin_mot])
    {
      printf("\"%s\" %s", mot, non);
      break;
    }
    fin_mot--;
  }
  if (debut_mot == milieu_mot)
    printf("\"%s\" %s", mot, oui);

  return 0;
}