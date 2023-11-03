#include <iostream>
#include <vector>
#include <list>
#include <set>

// Étape 1: Créer un set paramètre pour le type int de 1 à 100
std::set<int> createIntSet() {
    std::set<int> intSet;
    for (int i = 1; i <= 100; ++i) {
        intSet.insert(i);
    }
    return intSet;
}

// Étape 2: Fonction de recherche pour un set<int>
bool searchValue(const std::set<int>& intSet, int value) {
    return intSet.count(value) > 0;
}

// Étape 3: Version de la fonction de recherche prenant des itérateurs
template <typename Iterator, typename T>
bool searchValue(Iterator begin, Iterator end, const T& value) {
    for (Iterator it = begin; it != end; ++it) {
        if (*it == value) {
            return true;
        }
    }
    return false;
}

// Étape 4: Version générique de la fonction de recherche
template <typename Iterator, typename T>
bool searchValueGeneric(Iterator begin, Iterator end, const T& value) {
    for (Iterator it = begin; it != end; ++it) {
        if (*it == value) {
            return true;
        }
    }
    return false;
}

int main() {
    // Exemple d'appel sur un vecteur de string
    std::vector<std::string> strVector = {"apple", "banana", "cherry"};
    std::string strToFind = "banana";
    bool foundInStrVector = searchValueGeneric(strVector.begin(), strVector.end(), strToFind);
    std::cout << "Found in strVector: " << foundInStrVector << std::endl;

    // Exemple d'appel sur une liste d'entiers
    std::list<int> intList = {1, 2, 3, 4, 5};
    int intToFind = 3;
    bool foundInIntList = searchValueGeneric(intList.begin(), intList.end(), intToFind);
    std::cout << "Found in intList: " << foundInIntList << std::endl;

    // Exemple d'appel sur un tableau 'classique' de float
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float floatToFind = 3.3;
    bool foundInFloatArray = searchValueGeneric(floatArray, floatArray + 5, floatToFind);
    std::cout << "Found in floatArray: " << foundInFloatArray << std::endl;

    return 0;
}
