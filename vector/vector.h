//
// Created by brexm on 23/10/2018.
//

#pragma once

#include <ostream>

class Vector {
public:
    Vector();
    Vector(const Vector&);
    ~Vector();
    Vector&operator=(const Vector& vector);
    Vector operator+(const Vector&) const;
    bool operator==(const Vector&) const;
    int& operator[](unsigned int i) const;
    unsigned int size() const;
    bool empty() const;
    void append(const Vector &);
private:
    int* v;
    unsigned int s;
    int* copy() const;

};

std::ostream& operator<<(std::ostream& os, const Vector& vector) {
    for (int i=0; i<vector.size(); i++) {
        os << vector[i] << " ";
    }
    return os;
}