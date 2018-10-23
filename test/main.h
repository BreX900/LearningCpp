//
// Created by brexm on 23/10/2018.
//

#pragma once



#include "main.cpp"

int mainTest() {
    A z;
    A x(0);
    A y(6);

    if(z == x) std::cout << "z e x sono uguali" <<" - z: "<<z<<" - x: " <<x << std::endl;
    if(x != y) std::cout << "x e y sono uguali" <<" - x: "<<x<<" - y: " <<y<< std::endl;
    return 0;
}