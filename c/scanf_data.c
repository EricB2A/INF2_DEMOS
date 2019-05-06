#include <stdlib.h>
#include <stdio.h>

int main(void){
   int jour, mois, annee;

   printf("Entrez une date au format jj/mm/aaaa > ");
   scanf("%d\%d\%d", &jour, &mois, &annee);
   printf("Vous avez saissi la date suivante %02d/%02d/%4d\n", jour, mois, annee);

   printf("format jj mm aaaa >");
   scanf("%d %d %d", &jour, &mois, &annee);
   printf("Vous avez saissi la date suivante %02d/%02d/%4d\n", jour, mois, annee);

 printf("Date format jj mm aaa :");
   scanf("%*d %*d %d", &annee); // * ignore les valeurs associées
   printf("%d:%d:%d\n", jour, mois, annee);

   return EXIT_SUCCESS;
}
