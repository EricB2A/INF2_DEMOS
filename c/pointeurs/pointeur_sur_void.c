#include <stdlib.h>
#include <stdio.h>

int main(void){
   int i = 2;
   int* ptr;
   void* pt;

   pt = &i; // int* --> void*
   printf("i = %d, *pt = %d\n", i, *(int*)pt); // i = 2, *pt = 2

   /**
    * ici en C++, il faudrait caster pt
    */
   ptr = pt; // void* --> int*
   printf("i = %d, *ptr = %d\n", i, *ptr); // i = 2, *ptr = 2

   double x = 3;
   double* ptf = &x;

   pt = ptf;
   printf("x = %g, *pt = %g\n", x, *(double*)pt); // x = 3, *pt = 3

   pt = &i;
   ptf = pt;
   printf("i = %d, *ptf = %g\n", i, *ptf); // i = 2, *ptf ne donne pas 2 !

   return 0;
}