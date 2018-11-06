//
// Created by brexm on 05/11/2018.
//

#pragma once
#include <iostream>
template <class T>
class ThreeTree;

template <class T>
std::ostream& operator<<(std::ostream&, const ThreeTree<T>&);

template <class T>
class ThreeTree {
    friend std::ostream& operator<<(std::ostream&, const ThreeTree<T>&);
private:
    class Nodo{
    public:
        T info;
        Nodo *sx, *cx, *dx;
        Nodo(const T& t , Nodo* s=0, Nodo* c=0, Nodo* d=0): info(t), sx(s), cx(c), dx(d) {}
        static Nodo* copy(Nodo* r);

        static bool search (Nodo* r, const T& t);
    };
    Nodo* root;
    static void destruction(Nodo* r);

public:
    ThreeTree();
    ThreeTree<T>(const ThreeTree& t);
    ThreeTree& operator=(const T& t);
    bool operator==(const T& t) const;
    ~ThreeTree();
    void put(const T& t);
    bool search(const T& t) const ;
    bool  operator=(const ThreeTree&) const ;
};

