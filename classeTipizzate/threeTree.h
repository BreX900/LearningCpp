//
// Created by brexm on 05/11/2018.
//

#pragma once
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
        Nodo(const T& t , nodo* s=0, nodo* c=0, nodo* d=0): info(t), nx(s), cx(c), dx>(d) {}

    };
    Nodo* root;
    static Nodo* copy(Nodo* r);
    static void destruction(Nodo* r);
public:
    ThreeTree();
    ThreeTree(const ThreeTree& t);
    ThreeTree&operator=(const ThreeTree& t);
    ~ThreeTree();
    void put(const T& t);
    bool search(const T& t) const ;
    bool  operator=(const ThreeTree&) const ;
};
