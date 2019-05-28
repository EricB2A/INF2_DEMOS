#include <stdio.h>
#include <stdlib.h>

int main(void){

   int tab1[] = {1, 2, 3};
   int* ptr1 = tab1;

   char tab2[] = "ABC"; // eq à {'A', 'B', 'C', \0}
   char* ptr2 = tab2;

   printf("%p\n", (void*) ptr1);
   printf("%p\n", (void*) ptr2);

   printf("%s\n", ptr2); // pas d'équivalence pour les autres types de pointeurs

   printf("%d\n", *ptr1);
   printf("%c\n", *ptr2);

   return 0;
}
