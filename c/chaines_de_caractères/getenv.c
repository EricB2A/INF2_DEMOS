#include <stdlib.h>

int main(void){
   /**
    * On récupère variable d'envionnemetn
    */
   char* ptr;
   ptr = getenv("JAVA_HOME");

   /**
    * On peut également créer une vaiable d'environnement
    * Attention, celle-ci n'existe que dans la durée de vie du programme
    */
   ptr = getenv("TEST");
   if(ptr){
      printf("test = %s\n", ptr);
   }else{
      printf("NULL");
   }
   putenv("TEST=BLABLA")

   /**
    * Récupère toutes les variables d'environnement "officielles"
    */
   exter char** environ;
   for(int i = 0; i < 46; ++i){
      printf("environ[%d = %s\n", i, environ[i]);
   }
}