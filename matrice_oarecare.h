#include "matrice.h"
#include<iostream>
#pragma once
class matrice_oarecare: private matrice
{
    int n,m;
public:
    matrice_oarecare();
    matrice_oarecare(int, int, ccomplex**);
    ~matrice_oarecare();
    matrice_oarecare(const matrice_oarecare&);
    friend std::istream& operator>>(std::istream&, matrice_oarecare&);
    friend std::ostream& operator<<(std::ostream&, const matrice_oarecare&);
    void operator=(const matrice_oarecare &);
    bool diagonala();
};

