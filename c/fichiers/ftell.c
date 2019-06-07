#include <stdlib.h>
#include <stdio.h>

int main(void){
   FILE* f = fopen("entier.date", "wb+");

   if(!f){
      printf("Impossible d'ouvrir le fichier\n");
      return EXIT_FAILURE;
   }else{
      // insertion de 3 int dans fichier binaire
      for(int i = 1; i <= 3; ++i){
         fwrite(&i, sizeof(int), 1, f);
      }
      // on se positionn au début du fichier
      fseek(f, 0, SEEK_SET);
      printf("pos = %1d\n", ftell(f)); // affichera 0 et non pas 1
      
      fseek(f, -(long)sizeof(int), SEEK_END);
      printf("pos = %1d\n", ftell(f)); // affichera 8

      fseek(f, 0, SEEK_END);
      printf("pos = %1d\n", ftell(f)); // affichera 12
   }

   return EXIT_SUCCESS;
}