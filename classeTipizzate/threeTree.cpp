//
// Created by brexm on 05/11/2018.
//

#include "ThreeTree.h"


template<class T>
void ThreeTree<T>::destruction(Nodo* r) {
    if (r) {
        destruction(r->sx);
        destruction(r->cx);
        destruction(r->dx);
        delete r;
    }
}
template<class T>
bool ThreeTree<T>::operator=(const ThreeTree<T>& t) const {
    if (this!= &t) {
        destruction(t);
        root = copy(t.root);
    }
}

template<class T>
void ThreeTree<T>::put(const T &t) {
    root = new Nodo(t, root, copy(root), copy(root));

}

template<class T>
bool ThreeTree<T>::search(const T &t) const {
    return search(root, t);
}

template<class T>
bool ThreeTree<T>::search(Nodo *r, const T &t) {
    if (!r) return false;
    //albero non vuoto
    return r->info == t || search(r->sx) || search(r->cx) || search(r->dx);
}
template <class T>
bool ThreeTree<T>::equals(Nodo* r1, Nodo* r2) {
    if (!r1 && !r2) return true;
    if (!r1 || !r2) return false;
    return  r1->info == r2->info && equals(r1->sx, r2->sx) && equals(r1->cx, r2->cx) && equals(r1->dx, r2->dx);
}

template<class T>
bool ThreeTree<T>::operator==(const T &t) {
    return equals(root, t.root);
}

template<class T>
ThreeTree::Nodo *ThreeTree<T>::Nodo::copy(ThreeTree::Nodo *r) {
    return nullptr;
}

