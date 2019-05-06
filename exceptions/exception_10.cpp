#include <cstdlib>
#include <iostream>
using namespace std;

void onExit(){
   cout << "Fin du programme." << endl;
   system("PAUSE");
}
int main(){
   atexit(onExit); // function handler.
   return EXIT_SUCCESS;
}