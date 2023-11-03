#include <iostream>

template <typename T>
T carre(const T& valeur) {//carre est capable de calculer le carré d'une valeur de type quelconque
    return valeur * valeur;
}

int main() {
    int entier = 5;
    double reel = 3.5;
    
    int carreEntier = carre(entier);
    double carreReel = carre(reel);

    std::cout << "Le carré de " << entier << " est " << carreEntier << std::endl;
    std::cout << "Le carré de " << reel << " est " << carreReel << std::endl;

    return 0;
}
