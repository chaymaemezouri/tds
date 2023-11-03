#include <iostream>

class Complexe {
public:
    double reel;
    double imaginaire;

    Complexe(double r, double i) : reel(r), imaginaire(i) {}

    // Redéfinition de l'opérateur d'addition
    Complexe operator+(const Complexe& autre) {
        double nouveau_reel = reel + autre.reel;
        double nouveau_imaginaire = imaginaire + autre.imaginaire;
        return Complexe(nouveau_reel, nouveau_imaginaire);
    }

    // Redéfinition de l'opérateur de soustraction
    Complexe operator-(const Complexe& autre) {
        double nouveau_reel = reel - autre.reel;
        double nouveau_imaginaire = imaginaire - autre.imaginaire;
        return Complexe(nouveau_reel, nouveau_imaginaire);
    }

    // Redéfinition de l'opérateur de multiplication
    Complexe operator*(const Complexe& autre) {
        double nouveau_reel = reel * autre.reel - imaginaire * autre.imaginaire;
        double nouveau_imaginaire = reel * autre.imaginaire + imaginaire * autre.reel;
        return Complexe(nouveau_reel, nouveau_imaginaire);
    }

    // Redéfinition de l'opérateur de division
    Complexe operator/(const Complexe& autre) {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        double nouveau_reel = (reel * autre.reel + imaginaire * autre.imaginaire) / denominateur;
        double nouveau_imaginaire = (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur;
        return Complexe(nouveau_reel, nouveau_imaginaire);
    }

    void afficher() {
        std::cout << reel << " + " << imaginaire << "i" << std::endl;
    }
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;

    std::cout << "Saisissez la partie réelle du premier nombre complexe : ";
    std::cin >> reel1;
    std::cout << "Saisissez la partie imaginaire du premier nombre complexe : ";
    std::cin >> imaginaire1;
    std::cout << "Saisissez la partie réelle du deuxième nombre complexe : ";
    std::cin >> reel2;
    std::cout << "Saisissez la partie imaginaire du deuxième nombre complexe : ";
    std::cin >> imaginaire2;

    Complexe nombre1(reel1, imaginaire1);
    Complexe nombre2(reel2, imaginaire2);

    Complexe somme = nombre1 + nombre2;
    Complexe difference = nombre1 - nombre2;
    Complexe produit = nombre1 * nombre2;
    Complexe quotient = nombre1 / nombre2;

    std::cout << "Somme : ";
    somme.afficher();
    std::cout << "Différence : ";
    difference.afficher();
    std::cout << "Produit : ";
    produit.afficher();
    std::cout << "Quotient : ";
    quotient.afficher();

    return 0;
}
