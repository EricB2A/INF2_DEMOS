#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main(void){
   /**
    * + 1 pour chaine bien formée
    */
   char chaine1[MAX_SIZE + 1];

   // a tester avec " 123abc"
   printf("Entrez une chaine (max %d caract.) > ", MAX_SIZE);
   scanf("%[0123456789]", chaine1);
   printf("%s\n", chaine1);
   fflush(stdin);

   char chaine2[MAX_SIZE + 1];
   printf("Entrez une chaine mad %d caract.) > ", MAX_SIZE);
   scanf("%2[012346789]", chaine2);
   printf("%s\n", chaine2);
   fflush(stdin);

   return EXIT_SUCCESS;

}