a  - point<char> p(60, 65);
    p.affiche();

b-template <class T> class point
{
    T x, y; // coordonnees
public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        cout << "Coordonnees : " << static_cast<int>(x) << " " << static_cast<int>(y) << "\n";
    }
};

