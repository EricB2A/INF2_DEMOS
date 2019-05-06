
#include <iostream>
using namespace std;

[[noreturn]] void f(){
   cout << "Coucou"; // warning no return does return
}

[[noreturn]] void g(){
   throw "error"; // ok
}

int main(){

   try{
      //f();
      g();
   }catch(const char* e){
      cout << "hello ";
   }
   cout << "world" << endl;

   
   /*
      pas de retour à l'appelant, ne pas confendre avec void.
   */
}