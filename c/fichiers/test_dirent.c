#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(void){
   DIR* rep; 

   rep = opendir("C:/HEIG-VD/C++"); // ouvre dossier
   if(rep == NULL){ // si dossier pas ouvert
      return EXIT_FAILURE; // (mauvais chemin par exemple)
   }

   puts("Le dossier a été ouvert avec succès");

   return EXIT_SUCCESS;
}