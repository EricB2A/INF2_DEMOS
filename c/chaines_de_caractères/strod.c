#include <stdio.h>

#define SIZE 256

int main(void){
   char buffer[SIZE + 1];
   char format[20];

   printf("Entrez un réel > 1");
   sprintf(format ,"%%%d[^\n]", SIZE);
   scanf("|%s|\n", buffer);

   char* end;
   double x = strod(buffer, &end);

   printf("x = %g\n", x);
   printf("(void*) buffer = %p\n", (void*) buffer);

   return 0;
}