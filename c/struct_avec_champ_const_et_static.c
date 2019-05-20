#include <stdlib.h>
#include <stdio.h>

/**
 * Champs constants -> sans initialisation
 *                  -> seulemet avec aggrégat
 * Pas de champs statiques
 */
struct S {
   int a;
   const int b;
};

int main(void){
   //struct S s;
   // s.a = 1;
   // s.b = 2; -> erreur: assignment of read-only member 'b'

   // struct S s;
   // s = (struct S) {1, 2}; // erreur: assignment of read-only member 'b'

   // solution ::w
   
   struct S s = {1, 2};

   return EXIT_SUCCESS;
}