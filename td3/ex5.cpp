#include <iostream>
using namespace std;

class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur) {
        if (indice < 0 || indice >= 10) {
            throw out_of_range("Indice en dehors des limites du tableau.");
        }
        if (diviseur == 0) {
            throw runtime_error("Division par zéro.");
        }
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main() {
    int x, y;
    cout << "Entrez l'indice de l'entier à diviser: " << endl;
    cin >> x;

    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try {
        int resultat = Test::division(x, y);
        cout << "Le résultat de la division est : " << resultat << endl;
    } catch (const exception &e) {
        cerr << "Erreur : " << e.what() << endl;
        return 1;  // Arrêter le programme en cas d'exception
    }

    return 0;
}
