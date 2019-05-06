/*
   Ici on parle de la hiérarchie des exceptions.

   try{
      throw logic_error("blabla");
   }catch(exception e){ 
      => std::exception
   }catch(exception& e){ (2)
      => "blabla"
   }

   Héritage : 
   out_of_range -> logic_error -> exception
   
   (2) : 

*/

#include <cstdlib>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

int main(){
   exception e1;
   cout << e1.what() << endl;

   logic_error e2("logic error");
   cout << e2.what() << endl;

   out_of_range e3("out of range");
   cout << e3.what() << endl;

   e1 = e2;
   cout << e1.what() << endl;
   e2 = e3;
   cout << e2.what() << endl;

   /* 
      std::exception
      logic errro
      out of range
      std::exception
      out of range
   */

}