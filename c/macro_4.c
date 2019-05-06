#include <stdio.h>
#include <stdlib.h>

#define A 1
#define MACRO1(X) ((A) * (X))
#define MACRO2(X, Y) ((X) * (Y))

/**
 * Pas de surcharge pour les macros
 * Possibilité de les undef
 */
int main(void){
   printf("&d\n", MACRO1(5));
   printf("&d\n", MACRO2(3, 5));

   #undef MACRO1

   printf("%d\n", MACRO2(3,5));

   return EXIT_SUCCESS;
}