#include <stdlib.h>
#include <stdio.h>

int main(void){
   #define NLIGNES 2
   #define NCOLONNES 3
   
   int tab[NLIGNES][NCOLONNES] = {{1, 2, 3}, {4, 5, 6}};

   printf("%d\n", tab[0][0]);
   printf("%d\n", tab[1][2]);

   /**
    * &tab[0][0] = (int*)
    * tab[0]     = (int*)
    * tab        = (int(*)[NCOLONNES]) pointeur sur un tableau de int
    */
   for(int* p = &tab[0][0]; p <= &tab[NLIGNES - 1][NCOLONNES - 1]; ++p){
      *p = 0;
   }

   for(int* p = tab[0]; p < tab[1] + NCOLONNES; ++p){
      *p = 0;
   }

   int* p = tab[0];
   for(size_t i = 0; i < NLIGNES * NCOLONNES; ++i){
      *p++ = 0;
   }

   memset(tab[0], 0, NLIGNES * NCOLONNES * sizeof(int));

   return 0;
}