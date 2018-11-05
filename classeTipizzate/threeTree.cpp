//
// Created by brexm on 05/11/2018.
//

#include "ThreeTree.h"


static ThreeTree::Nodo::Nodo* copy(ThreeTree::Nodo::Nodo* r){
    if (!r) return nullptr;
    return new Nodo(r->info, copy(r->sx), copy(r->cx), copy(r->dx))
}

static void ThreeTree::destruction(Nodo* r) {
    if (r) {
        destruction(r->sx)
        destruction(r->cx)
        destruction(r->dx)
        delete r;
    }
}

bool ThreeTree::operator=(const ThreeTree& t) const {
    if (this!= &t) {
        destruction(t);
        root = copy(t.root)
    }
}
