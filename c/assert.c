#define NDEBUG // pour désactiver assert
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define TRACE() fprintf(stderr, "Trace point int %s:%s line %d\n",\
                      __FILE__, __func__, __LINE__ )

int f(int n){
   assert(n <= 4);
   return n;
}

int main(void){
   TRACE();
   for(int i = 1; i <= 10; ++i){
      f(i);
      printf("i = %d\n", i);
   }
   return EXIT_SUCCESS;
}