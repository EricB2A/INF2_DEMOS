#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define PRINT_ADDRESS(ADR) printf(#ADR " = 0x%" PRIxPTR "\n", (intptr_t) ADR)

int main(void) {
   bool b = true;
   char c = 'A';
   int n = 255;
   double x = 123.456;

   printf("b = |%s| (%%s)\n\n", b ? "true" : "false"); // b = |true| (%s)

   printf("c = |%c| (%%c)\n", c); // c = |A| (%c)
   printf("c = |%2c| (%%2c)\n", c); // c = | A| (%2c) -> affiche c sur 2 position, justifié à droite
   printf("c = |%-2c| (%%-2c)\n\n", c); // c = |A | (%-2c) -> justifié à gauche

   printf("n = |%d| (%%d)\n", n); // n = |255| (%d) -> préconiser
   printf("n = |%i| (%%i)\n", n); // n = |255| (%i) -> printf -> %d == %i, pas pour scanf
   printf("n = |%5d| (%%5d)\n", n); // n = | 255| (%5d)
   printf("n = |%2d| (%%2d)\n", n); // n = |255| (%2d) -> moins d'espace réservé que taille nbr -> nbr jamais tronqué
   printf("n = |%05d| (%%05d)\n", n); // n = |00255| (%05d) -> padding avec 0 
   printf("n = |%.5d| (%%.5d)\n", n); // n = |00255| (%.5d)
   printf("n = |%-5d| (%%-5d)\n", n); // n = |255 | (%-5d) -> changer ajustement
   printf("n = |%10.4d| (%%10.4d)\n", n); // n = | 0255| (%10.4d)
   printf("n = |%o| (%%o)\n", n); // n = |377| (%o)
   printf("n = |%#o| (%%#o)\n", n); // n = |0377| (%#o) -> avec #, préfixe octal 0
   printf("n = |%x| (%%x)\n", n); // n = |ff| (%x)
   printf("n = |%X| (%%X)\n", n); // n = |FF| (%X)
   printf("n = |%#x| (%%#x)\n", n); // n = |0xff| (%#x)
   printf("n = |%#X| (%%#X)\n\n", n); // n = |0XFF| (%#X) -> avec #, préfixe hexa 0x

   printf("x = |%f| (%%f)\n", x); // x = |123.456000| (%f) -> tjrs 6 chiffres après la virgule
   printf("x = |%7.2f| (%%7.2f)\n", x); // x = | 123.46| (%7.2f) -> je veux réserver 7 positions pour afficher nbr (point inclu)
                                        //                       -> arrondi, pas troncature
   printf("x = |%5f| (%%5f)\n", x); // x = |123.456000| (%5f) -> même résultat avec %f
   printf("x = |%.2f| (%%.2f)\n", x); // x = |123.46| (%.2f)
   printf("x = |%.0f| (%%.0f)\n", x); // x = |123| (%.0f)
   printf("x = |%05.0f| (%%05.0f)\n", x); // x = |00123| (%05.0f) -> aucun chiffre après la virgule, sur 5 position
   printf("x = |%e| (%%e)\n", x); // x = |1.234560e+002| (%e) -> jamais un 0 devant le point !
   printf("x = |%E| (%%E)\n", x); // x = |1.234560E+002| (%E) -> on a tjr le signe +
   printf("x = |%10.1e| (%%10.1e)\n\n", x); // x = | 1.2e+002| (%10.1e)

   printf("x = |%f| (%%f)\n", 0.5); // x = |0.500000| (%f)
   printf("x = |%e| (%%e)\n", 0.5); // x = |5.000000e-001| (%e)
   printf("x = |%g| (%%g)\n", 0.5); // x = |0.5| (%g)
   printf("x = |%#g| (%%#g)\n", 0.5); // # => 6 chiffres significatifs
                                      // x = |0.500000| (%#g)
   printf("x = |%#g| (%%#g)\n", 1.234567); // x = |1.23457| (%#g)
   printf("x = |%g| (%%g)\n", 0.00001); // notation scientifique
   // si exp < -4 ou > 5
   // x = |1e-005| (%g)
   printf("x = |%#g| (%%#g)\n\n", 0.00001); // x = |1.00000e-005| (%#g)

   int* ptr = &n;
   printf("ptr = |%p| (%%p)\n", ptr); // ptr = |000000000022FE34| (%p)
   printf("ptr = |%p| (%%p)\n", (void*) ptr); // ptr = |000000000022FE34| (%p)
   printf("ptr = |0x%" PRIxPTR "| (PRIxPTR)\n", (intptr_t) ptr); // ptr = |0x22fe34| (PRIxPTR)
   PRINT_ADDRESS(&n); // &n = 0x22fe34

   return EXIT_SUCCESS;
}