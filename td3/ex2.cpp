#include <iostream>
#include <list>

void afficherListe(const std::list<int>& maListe) {
    for (const int& element : maListe) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void triBulle(std::list<int>& maListe) {
    bool echanger = true;
    while (echanger) {
        echanger = false;
        auto it1 = maListe.begin();
        auto it2 = std::next(it1);
        while (it2 != maListe.end()) {
            if (*it1 > *it2) {
                std::swap(*it1, *it2);
                echanger = true;
            }
            ++it1;
            ++it2;
        }
        if (!echanger) {
            break;
        }
    }
}

void triSelection(std::list<int>& maListe) {
    for (auto it1 = maListe.begin(); it1 != maListe.end(); ++it1) {
        auto minElement = it1;
        for (auto it2 = std::next(it1); it2 != maListe.end(); ++it2) {
            if (*it2 < *minElement) {
                minElement = it2;
            }
        }
        std::swap(*it1, *minElement);
    }
}

void triInsertion(std::list<int>& maListe) {
    for (auto it1 = std::next(maListe.begin()); it1 != maListe.end(); ++it1) {
        int elementAInserer = *it1;
        auto it2 = it1;
        while (it2 != maListe.begin() && *(std::prev(it2)) > elementAInserer) {
            *it2 = *(std::prev(it2));
            --it2;
        }
        *it2 = elementAInserer;
    }
}

int main() {
    std::list<int> maListe;
    int nombre, choix;

    do {
        std::cout << "Entrez un entier (0 pour terminer) : ";
        std::cin >> nombre;
        if (nombre != 0) {
            maListe.push_back(nombre);
        }
    } while (nombre != 0);

    std::cout << "Choisissez le tri : " << std::endl;
    std::cout << "1. Tri à bulles" << std::endl;
    std::cout << "2. Tri par sélection" << std::endl;
    std::cout << "3. Tri par insertion" << std::endl;
    std::cin >> choix;

    switch (choix) {
        case 1:
            triBulle(maListe);
            std::cout << "Liste triée (tri à bulles) : ";
            afficherListe(maListe);
            break;
        case 2:
            triSelection(maListe);
            std::cout << "Liste triée (tri par sélection) : ";
            afficherListe(maListe);
            break;
        case 3:
            triInsertion(maListe);
            std::cout << "Liste triée (tri par insertion) : ";
            afficherListe(maListe);
            break;
        default:
            std::cout << "Choix invalide." << std::endl;
    }

    return 0;
}
