#include <iostream>

class Punto
{
public:
    Punto() = default;
    Punto(double x, double y) : x(x), y(y) {};
    
    void print() {
        std::cout << "(" << x << ", " << y << ")\n";
    }

    // Declaración de la sobrecarga del operador + no miembro
    friend inline Punto operator+(const Punto& p1, const Punto& p2);

private:
    double x{}, y{};
};

// Definición de la sobrecarga del operador + no miembro
inline Punto operator+(const Punto& p1, const Punto& p2)
{
    return Punto(p1.x + p2.x, p1.y + p2.y);
}

int main()
{
    Punto p1(3, 4), p2(6, 2);
    Punto pr{ p1 + p2 };
    pr.print(); // (9, 6)
    return 0;
}