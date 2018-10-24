#include <iostream>
#include "main.h"

class A {
public:
    A(int p = 0) {i = p;}
    operator int() {
        std::cout << "Hello";
        return i;
    }
private:
    int i;
};

int mainConenitori() {
    A z;
    A x(0);
    A y(6);

    if(z == x) std::cout << "z e x sono uguali" <<" - z: "<<z<<" - x: " <<x << std::endl;
    if(x != y) std::cout << "x e y sono uguali" <<" - x: "<<x<<" - y: " <<y<< std::endl;

    int p = 4;
    double w = static_cast<double>(p)

    return 0;
}
