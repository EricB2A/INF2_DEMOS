#include <cstdlib>
#include <iostream>
using namespace std;

class Point{
   friend ostream& operator<< (ostream& os , const Point& p);
   public:
   Point(int x = 0, int y = 0);
   private:
   int x, y;
};

ostream& operator<< (ostream& os, const Point& p){
   return os << "(" << p.x << ", "<< p.y << ")";
}

Point::Point(int x, int y) : x(x), y(y) {}
// alternative
// Point::Point(int x, int y) noexcept : x(x), y(y) {}

void onTerminate(){
   cout << "onTerminate() " << endl;
   exit(EXIT_FAILURE); // quitte le programme sans crash
}

template <typename T>
void f() noexcept(noexcept(T())){ // garanti no-throw si le constructeur par défaut 
                                 // de T l'est aussi
   T obj;
   cout << obj << endl;
   throw 1; // si pas de noexcept dans le constructeur de Point -> erreur rattrapable (au sens catch)
            // si noexcept dans constructeur de Point -> erreur non rattrapable
}

int main(){
   set_terminate(onTerminate);
   try{
      f<Point>();
   }catch(...){
      cout << "Erreur survenue" << endl;
   }
}
