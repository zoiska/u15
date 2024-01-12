//
// Created by zoisk on 11.01.24.
//
#include "Lenkrad.h"

#ifndef AUTO_B_H
#define AUTO_B_H


class auto_b : Lenkrad {
public:
    Lenkrad lenkrad;
    auto_b(Lenkrad lenkrad){
        this->lenkrad = lenkrad;
    }
    ~auto_b(){}
};


#endif //AUTO_B_H
