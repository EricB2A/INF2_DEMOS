#include <stdio.h>
#include <stdlib.h>

int main(void){

   {
      /**
       * La visibilité de la struct est limitée au bloc
       */
      typedef struct {
         int jour;
         int mois;
         int annee;
      } Date;

      Date d1 = {25, 12, 2016};
      printf("%02d.%02d.%d\n", d1.jour, d1.mois, d1.annee);
   }

   return EXIT_SUCCESS;
}