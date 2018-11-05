//
// Created by brexm on 23/10/2018.
//

#include "vector.h"

Vector::Vector(): v(nullptr), s(0) {}

Vector::Vector(const Vector & vector): s(vector.s), v(vector.copy()) {}

Vector::~Vector() {
    if (v) delete v;
}

int *Vector::copy() const {
    int* b = !s ? nullptr : new int[s];
    for (int i=0; i<s; i++) {
        b[i] = v[i];
    }
    return b;
}

Vector &Vector::operator=(const Vector &vector) {
    if (this != &vector) {
        if (v) delete[] v;
        v = vector.copy();
        s = vector.s;
    }
    return *this;
}

Vector Vector::operator+(const Vector &vector) const {
    Vector w;
    int x = s + vector.s;
    if (x) {   //[*this.empty()||vector.empty()]  x>0
        w.v = new int[x];
        for (unsigned int i = 0; i < s; i++) {
            w.v[i] = v[i];
        }
        for (unsigned int i = 0; i < s; i++) {
            w.v[s + i] = vector.v[i];
        }
    }
    return w;
}

bool Vector::operator==(const Vector & vector) const {
    if (s != vector.s) return false;
    for (unsigned int i=0; i<s; i++) {
        if (v[i] != vector.v[i]) return false;
    }
    return true;
}

int &Vector::operator[](unsigned int i) const {
    return v[i];
}

bool Vector::empty() const {   return !s;   }

unsigned int Vector::size() const { return s;    }

void Vector::append(const Vector &vector) {
    *this = *this + vector~;
}


/*destroy() const {if (v) delete v;}*/
