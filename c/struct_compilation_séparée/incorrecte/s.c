#include "s.h"
#include <stdio.h>

struct S {
   int n;
};

void afficher(const T* s){
   printf("n = %d\n", s->n);
}