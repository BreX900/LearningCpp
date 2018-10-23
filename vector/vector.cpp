//
// Created by brexm on 23/10/2018.
//

#include "vector.h"

Vector::Vector(): v(nullptr), size(0) {}

Vector::Vector(const Vector & vector): size(vector.size), v(vector.copy()) {}

int *Vector::copy() const {
    int* b = !size ? nullptr : new int[size];
    for (int i=0; i<size; i++) {
        b[i] = v[i];
    }
    return b;
}

Vector &Vector::operator=(const Vector &vector) {
    if (this != &vector) {
        if (v) delete[] v;
        v = vector.copy();
        size = vector.size;
    }
    return *this;
}

Vector::~Vector() {
    if (v) delete v;
}


/*destroy() const {if (v) delete v;}*/
