//
// Created by brexm on 23/10/2018.
//

#pragma once

class Vector {
public:
    Vector();
    Vector(const Vector&);
    Vector&operator=(const Vector& vector);
    ~Vector();
private:
    int* v;
    unsigned int size;
    int* copy() const;

};