#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <string>
using namespace std;

class C {
public:
   C(int n)
      try: n(n) {
         if(n <= 0 || n > 10)
            throw invalid_argument(string("Error in ") + __func__ + ": n must bu in 1..10");
      } catch(const exception& e){
         cout << e.what() << endl; // + throw implicite !
      }
private:
   int n;
};

int main(){

   try{
      C c1(0);
   }catch(const invalid_argument&){
      cout << "bye bye" << endl;
   }

   return 0;
}
