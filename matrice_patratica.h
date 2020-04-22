#include "matrice.h"
#include<iostream>
#pragma once
class matrice_patratica: private matrice
{
    int dim;
public:
    matrice_patratica();
    matrice_patratica(int, ccomplex**);
    ~matrice_patratica();
    matrice_patratica(const matrice_patratica&);
    friend std::istream& operator>>(std::istream&, matrice_patratica&);
    friend std::ostream& operator<<(std::ostream&, const matrice_patratica&);
    void operator=(const matrice_patratica &);
    bool diagonala();
    void afisare();
    ccomplex determinant() const;
};

