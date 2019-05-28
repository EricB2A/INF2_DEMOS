#include <stdio.h>
#include <stdlib.h>

/**
 * RAPPEL: pour un struct, la visibilité est limité au bloc.
 */

/**
 * EN clair -> enum dans struct visible partour
 *          -> enum dans fonction visible dans ta mère
 */

struct S {
   enum AB {A = 10, B = 20} champ1; // visible à l'extérieur
   double champ2;
};

void print(const struct S* s){
   if(s->champ1 == A){
      printf("s->champ de type A\n");
   }else{
      printf("s->champ de type A\n");
   }
}

void f(){
   enum CD {C = 30, D = 40}; // invisible à l'extérieur
   printf("dans f, C = %d\n",C);
}

int main(void){
   struct S s = {A, 1.5};
   printf("s.champ1 = %d, s.champ2 = %g\n", s.champ1, s.champ2);
   printf(&s);
   /**
    *  La portée de l'enum dépasse la structure
    */
   printf("B = %d\n", B); // B est visible ici

   f(); // je vous dis f, vous faites quoi ?
   // printf("C = %d\n", C); // C n'est pas visible ici

   return EXIT_SUCCESS;
}

/**
 * Le programme affiche : 
 * s->champ1 de type A
 * B = 20
 * dans f, C = 30
 * 
 */