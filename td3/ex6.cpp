#include <iostream>

int main() {
    vectok v1(5); // Créer un vecteur v1 avec 5 éléments
    for (int i = 0; i < v1.taille(); i++) {
        v1[i] = i * 10;
    }

    // Copier v1 dans v2 en utilisant le constructeur de copie
    vectok v2 = v1;

    // Afficher les éléments de v1
    std::cout << "v1 : ";
    for (int i = 0; i < v1.taille(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    // Afficher les éléments de v2 (copie de v1)
    std::cout << "v2 : ";
    for (int i = 0; i < v2.taille(); i++) {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    // Modifier un élément de v2
    v2[2] = 999;

    // Afficher les éléments de v1 et v2 après modification
    std::cout << "Après modification de v2 : " << std::endl;
    std::cout << "v1 : ";
    for (int i = 0; i < v1.taille(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "v2 : ";
    for (int i = 0; i < v2.taille(); i++) {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
