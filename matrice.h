#include<iostream>
#include "ccomplex.h"
#pragma once
class matrice{
protected:
    ccomplex **v;
public:
    matrice();
    matrice(int, int, ccomplex**);
    ~matrice();
    matrice(const matrice&);
    virtual bool diagonala()=0;
};


