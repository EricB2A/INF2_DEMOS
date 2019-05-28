#include <stdio.h>
#include <stdlib.h>

typedef struct Date Date;

void afficher(const Date* date);

/**
 * Malgé le typedef struct Date ne peut être placé après la fonction main
 * Sinon, produirait : error: storage size of 'd' isn't known
 * 
 */
struct Date {
   int jour;
   int mois;
   int annee;
};

int main(void){
   Date d = {25, 12, 2019};
   afficher(&d);
}

void afficher(const Date* date){
   printf("%02d.%02d.%d\n", date->jour, date->mois, date->annee);
}