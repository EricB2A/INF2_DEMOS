#include <stdlib.h>
#include <stdio.h>

/**
 * Ici la macro max est VISIBLE depuis le main, alors que défini dans f.
 * Visiblilté spéciale des macros.
 */
void f(void){
   printf("Dans f(void)\n");
   #define max(a,b) ((a) > (b) ? (a) : (b))
}

int main(void){
   printf("max(3,4) = %d\n", max(3,4));

   return EXIT_SUCCESS;
}