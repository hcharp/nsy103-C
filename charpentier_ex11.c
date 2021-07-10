#include<stdio.h>

int main(){
	
	printf("Enter secondes : ");
	int secondes_utilisateur;
	scanf("%d",&secondes_utilisateur);


	int jours,heures,minutes,secondes;
	int reste_en_secondes;
	
	int secondes_en_jours = 24 * 60 * 60;
	int secondes_en_heures = 60 * 60;
	int secondes_en_minutes = 60;

	// On calcule le nombre de jours, le reste correspond à toutes les secondes restantes
	jours = (secondes_utilisateur/secondes_en_jours);
	reste_en_secondes = secondes_utilisateur - (jours * secondes_en_jours);

	// On prend les secondes restantes et on fait la même chose pour les heures...
	heures = (reste_en_secondes/secondes_en_heures);	
	reste_en_secondes = reste_en_secondes - (heures * secondes_en_heures);

	// ... puis pour les minutes
	minutes = reste_en_secondes/secondes_en_minutes;
	reste_en_secondes = reste_en_secondes - (minutes*secondes_en_minutes);

	// ... et le reste correspond aux secondes indivisbles
	secondes = reste_en_secondes;
	
	printf("%d j, %d h, %d m,  %d s",jours, heures,minutes,secondes);
}