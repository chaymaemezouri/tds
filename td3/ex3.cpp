#include <iostream>
#include <list>
#include <string>

struct Personne {
    std::string nom;
    std::string prenom;
    int age;

    bool operator<(const Personne& autre) const {
        // Compare d'abord les noms, puis les prénoms en cas d'égalité
        if (nom != autre.nom) {
            return nom < autre.nom;
        }
        return prenom < autre.prenom;
    }
};

int main() {
    std::list<Personne> listePersonnes;
    Personne personne;

    std::cout << "Entrez les personnes (nom prénom âge) - Entrez '0' pour terminer :\n";

    while (true) {
        std::cin >> personne.nom;
        if (personne.nom == "0") {
            break;
        }
        std::cin >> personne.prenom >> personne.age;
        listePersonnes.push_back(personne);
    }

    listePersonnes.sort(); // Tri de la liste en utilisant l'opérateur < redéfini

    std::cout << "Liste triée :\n";
    for (const Personne& p : listePersonnes) {
        std::cout << p.nom << " " << p.prenom << " " << p.age << std::endl;
    }

    return 0;
}
