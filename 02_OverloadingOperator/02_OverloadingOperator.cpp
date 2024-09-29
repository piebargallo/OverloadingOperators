#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Sobrecarga del operador de asignación
    Vector& operator=(const Vector& v) {
        if (this == &v) return *this; // Manejo de autoasignación
        x = v.x;
        y = v.y;
        return *this;
    }

    // Sobrecarga del operador de suma
    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y);
    }

    void print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4), v2(1, 2);
    Vector v3;

    v3 = v1; // Usando el operador de asignación
    Vector v4 = v1 + v2; // Usando el operador de suma

    cout << "v3: ";
    v3.print();
    cout << "v4: ";
    v4.print();

    return 0;
}
