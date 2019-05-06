#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
   public:
   Point(int x, int y) :x(x), y(y) {}
   void afficher() const {
      cout << "(" << x << ";" << y;
   }
   private:
   int x;
   int y;
};

class PointCouleur : public Point{
   public:
   PointCouleur(int x, int y, int couleur);
   void afficher () const {
      Point::afficher();
      cout << " couleur : " << couleur;
   }
   private:
   int couleur;
};


int main() {

      Point p(1, 2);
      p.afficher(); cout << endl; // affiche (1, 2)

      PointCouleur pc(1, 2, 3);
      pc.afficher(); cout << endl; // affiche (1, 2) couleur : 3

      p = pc;
      p.afficher(); cout << endl; // affiche (1, 2)

   return EXIT_SUCCESS;
}


class Point{
   public:
   Point(int x, int y) :x(x), y(y) {}
   void virtual afficher() const {
      cout << "(" << x << ";" << y;
   }
   private:
   int x;
   int y;
};