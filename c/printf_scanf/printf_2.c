#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Fait de la merde si le buffer est déjà vide.
 * Cpdt, savoir si un buffer est vide est casse couille
 */
#define VIDER_BUFFER \ 
do {while(getchar() != '\n');} while(0);

int main(void){
   char str[20];
   int i;

   printf("Entrez votre nom de famille : ");
   scanf("%19", str);
   fflush(stdin);

   printf("Entrez votre age : ");
   scanf("%d", &i);
   VIDER_BUFFER;

   printf("Mr.  %s, %d, ans.\n", str, i);
   printf("Entrer un hexa : ");
   scanf("%x", &i);
}