#include <stdlib.h>
#include <stdio.h>

int main(void){
   char chaine1[10];
   int n, m1;
   printf("Entrez votre chaine > ");
   n = scanf("%s%n", chaine1, &m1); // à noter le %n
   printf("%s\n", chaine1);
   printf("%d\n", m1);
   printf("%d\n", n); // ne pas confondre le param &m1 et la valeur de retourn scanf!

   /**
    * sans le fflush on aurait 4 et pas 3
    * abc\n -> \n reste dans le buffer
    * fflush permet de vider les résidus -> les \n
    * on dire le buffer, même si la lecture c'est bien passé
    */
   fflush(stdin);

   char chaine2[10];
   int m2;
   printf("Entrez votre chaine > ");
   n = scanf("%s%n", chaine2, &m2);
   printf("%s\n", chaine2);
   printf("%d\n", m2);
   printf("%d\n", n);

   return EXIT_SUCCESS;
}