#include <stdio.h>
#include <stdlib.h>

void afficher(const int* adr, size_t n);
int comparer(const void* a, const void* b);

int main(void){
   int tab[8] = {1, 3, -1, 5, 2, -2, 1, 0};
   const size_t TAILLE = sizeof(tab) / sizeof(int);

   afficher(tab, TAILLE);
   qsort(tab, TAILLE, sizeof(int), comparer);
   afficher(tab, TAILLE);

   system("PAUSE");
   return EXIT_SUCCESS;
}

void afficher(const int* adr, size_t n){
   printf("[");
   for(size_t i = 0; i < n; ++i){
      if (i > 0){
         printf(", ");
      }
      printf("%d", *(adr + i)); // ou printf("%d", adr[i]);
   }
   printf("]\n\n");
}

int comparer(const void* a, const void* b){
   return *(int*)a - *(int*)b;
}
