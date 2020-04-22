#include<iostream>
#pragma once
class ccomplex
{
    float re, img;
    public:
        ccomplex();
        ccomplex(float , float );
        ~ccomplex();
        ccomplex(const ccomplex&);
        void afisare();
        void modul();
        ccomplex ssqrt();
        void setRe(float x);
        void setImg(float x);
        float getRe();
        float getImg();
        ccomplex operator+(const ccomplex&);
        friend ccomplex operator*(const ccomplex&, int x);
        ccomplex operator-(const ccomplex&);
        ccomplex operator*(const ccomplex&);
        ccomplex operator/(const ccomplex&);
        friend std::istream &operator>>(std::istream &, ccomplex &);
        friend std::ostream &operator<<(std::ostream &, const ccomplex &);
        void operator=(const ccomplex &);
        bool operator!=(const ccomplex &);
        bool operator==(const ccomplex &);
};

