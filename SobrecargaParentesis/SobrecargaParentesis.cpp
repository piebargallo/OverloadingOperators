#include <iostream>
using namespace std;

class FuncObject {
public:
    // Overloading operator ()
    int operator()(int x) {
        return x * x;
    }
};

int main() {
    // Instantiation class
    FuncObject func;
    // Call function
    int result = func(5); 
    // Output 25
    cout << "El resultado es: " << result << endl; 
    return 0;
}
