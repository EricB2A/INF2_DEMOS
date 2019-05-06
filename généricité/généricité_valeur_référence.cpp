

template <typename T>
size_t nbOcc(const T tab[], size_t taille, const T elem);

int main() {
   /*
      Quand a des chaines constantes identiques ("Paul"), cette addresse 
      est stockée à un seul endroit. Paul est stocké 2x à la même adresse.

   */
   const char* const TAB[] = {"Paul", "Jacques", "Paul", "Jean", "Paul"};
   const size_t TAILLE = sizeof(TAB) / size_of(const char*);
   const char* s;
   size_t n = nbOcc(TAB, TAILLE, s);
   cout << "Nombre d'occurences = " << n << endl;
   cout << (void*)TAB[0] << endl;
   cout << (void*)TAB[2] << endl;
   cout << (void*)TAB[4] << endl;
   cout << (void*)s << endl;

   /*
      Ne fonctionne pas pour le cas suivant
   
   */
   
   {
      const char* const TAB[] = {"Paul", "Jacques", "Paul"};
      const size_t TAILLE = sizeof(TAB) / size_of(const char*);
      const char[];
   


   }


}
