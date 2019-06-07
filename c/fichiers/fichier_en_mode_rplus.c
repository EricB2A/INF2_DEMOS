#include <stdlib.h>
#include <stdio.h>

#define NOM_FICHIER "fichier.jaimelesfrites"
int main(void){
   FILE* f = fopen(NOM_FICHIER, "r+");

   if(!f){
      printf("Ouversure fichier /%s/ impossible. \n", NOM_FICHIER);
      return EXIT_FAILURE;
   }else{
      int n;
      // lire la première valeur du fichier
      fscanf(f, "%d\n", &n);
      printf("%d\n", n);

      // se positionne à la fin du fichier
      fseek(f, 0, SEEK_END);

      // écrire les 2 valeurs 11 et 12 dans le fichier
      fprintf(f, "%d\n", 11);
      fprintf(f, "%d\n", 12);

      // se repositionne au début du fichier
      rewind(f); // ou fseek(f, 0, SEEK_SET);

      fscanf(f, "%d\n", &n);
      printf("%d\n", n);
      fscanf(f, "%d\n", &n);
      printf("%d\n", n);
   }

   return EXIT_SUCCESS;
}