#include <stdlib.h>
#include <stdio.h>

int main(void){
   char chaine[100];
   printf("Entrez votre nom et vore prenom");
   /**
    * les espaces blanc intions sont sautés.. mais la lexture s'interrompt
    * ensuite au premier espace blanc rencontré
    */
   //scanf("%s", chaine);

   /**
    * Les espaces blanc initiaux sont sautés. On lit tous les caractères initiaux 
    * (mais au plus 99 caract) autres que \n
    * Corollaire : permet de lire une ligne de texte contenant des espaces blanc..
    * ce qui ne permet pas de scanf ("%s", chaine);
    */
   scanf(" %99[^\n]", chaine);

   fflush(stdin);

   return EXIT_SUCCESS;
}