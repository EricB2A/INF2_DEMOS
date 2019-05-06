#include <stdlib.h>
#include <stdio.h>

int main(void){


   int n;
   int res;

   printf("n > ");
   /**
    * tjrs mettre adresse de n
    */
   res = scanf("%d", &n); 
   if(res == 0){
      printf("Erreur de saisie \n");
   }else if(res == 1){
      printf("n = %d\n", n);
   }else if(res == EOF){ // par ex CTRL-Z sous DOS
      printf("EOF\n");
   }

   //system("PAUSE");
   return EXIT_SUCCESS;

}