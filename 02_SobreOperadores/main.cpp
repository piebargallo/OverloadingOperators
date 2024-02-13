#include <iostream>

class Punto
{
public:
    Punto() = default;
    Punto(double x, double y) : x(x), y(y) {};
    
    void print() {
        std::cout << "(" << x << ", " << y << ")\n";
    }

    // Definición de la sobrecarga del operador + miembro
    Punto operator+(const Punto& p) const
    {
        return Punto(x + p.x, y + p.y);
    }

private:
    double x{}, y{};
};

int main()
{
    Punto p1(3, 4), p2(6, 2);
    Punto pr{ p1 + p2 };
    pr.print(); // (9, 6)
    return 0;
}