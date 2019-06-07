#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

/**
 * ferror = s'il y a eu une erreur
 * perror = affiche message système + message perso
 * clearerr = nettoyage
 * 
 * puts = passe à la ligne, fputs = ne passe pas à la ligne
 * 
 * pas de flag d'erreur au moment du open, même si ça a foiré
 */
int main(void){
   FILE* fp = fopen("file1.txt", "r");

   if(fp == NULL){
      printf("errno = %d\n", errno);
      puts(strerror(errno));
      perror("Une erreur est survenue");
      return EXIT_FAILURE;
   }else{
      fputc('a', fp);
      if(ferror(fp)){
         perror("Oups");
      }
      clearerr(fp);
      if(ferror(fp)){
         perror("Oups");
      }
      if (fcloce(fp) == 0){
         printf("Fermeture di fichier \n");
      }
      fclose(fp); // sans incidence 
      return EXIT_SUCCESS;
   }

}