#include <iostream>

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
