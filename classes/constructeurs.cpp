#include <iostream>
using namespace std;

class Rectangle {
public:
   /*
      Rectangle() = default;
      La méthode default ne nous permet par d'assigner larg. et long. aux valeurs données.
      En gros, notre constructeur n'a pas de corps.
   */
   /*
      Actuellement, le constructeur sans paramètres va appeler le constructeur à 2 paramètres.
   */
   Rectangle();
   Rectangle(double largeur, double longueur);
   /*
      On évite cette méthode car boiteux.
      Le client peut passer un seul paramètres, et l'autre est mis par défaut.
      Rectangle(double largeur = 0, double longueur = 0);
   */
   double surface() const;
private:
   double largeur;
   double longueur;
   // double largeur = 1;
   // double longueur = 1;
};

Rectangle::Rectangle(double la, double lo) : largeur(la), longueur(lo) {}

Rectangle::Rectangle() : Rectangle(0, 0) {}

double Rectangle::surface() const{
   return largeur * longueur;
}

Rectangle r0(1, 2); // allocation statique
int main(){
   Rectangle r1; // Il nous manque un constructeur vide
   Rectangle r2(2, 3); // allocation automatique
   const Rectangle R3(3, 4); // allocation automatique
   Rectangle* r4 = new Rectangle(4, 5); // allocation dynamique

   cout << "surface de r0 = " << r0.surface() << endl;
   cout << "surface de r1 = " << r1.surface() << endl;
   cout << "surface de r2 = " << r2.surface() << endl;
   cout << "surface de r3 = " << R3.surface() << endl;
   cout << "surface de r4 = " << r4->surface() << endl;
   return 0;
}
