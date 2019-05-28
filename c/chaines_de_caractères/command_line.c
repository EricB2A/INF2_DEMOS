#include <stdio.h>
#include <stdlib.h>


/**
 * A utiliser via un un terminal.
 * Exemple d'utilisation : `command-line abc 12 3.14 def`
 * Affiche => argv[0] = command_line (nom du programme)
 *            argv[1] = abc
 *            argv[2] = 12
 *            argv[3] = 3.14
 *            argv[1] = def
 */
int main(int argc, char* argv[]){
   
   printf("argc = %d\n", argc);

   /**
    * Ici on parcours sur argv.
    * Il existe d'autres manières, dont celle présenté dans le cours (slide 52)
    */
   int i;
   for(i = 0; i < argc; ++i){
      printf("argv[%d] = %s\n", i, argv[i]);
   }

   return EXIT_SUCCESS;
}