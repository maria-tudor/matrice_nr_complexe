#include "ccomplex.h"
#include "NuFloat.h"
#include<iostream>
#include<math.h>
ccomplex::ccomplex(){
this->re=0;
this->img=0;
}

ccomplex::ccomplex(float x, float y){
this->re=x;
this->img=y;
}

ccomplex::~ccomplex(){
re=0;
img=0;
}

ccomplex::ccomplex(const ccomplex &other){
this->re=other.re;
this->img=other.img;
}

void ccomplex::afisare(){
if (img==0&&re==0)
    std::cout<<"0"<<"\n";
else{
    if(img==0)
        std::cout<<re<<"\n";
    else{
        if(re==0)
            std::cout<<img<<"*i"<<"\n";
        else{
            if((img>0 && re>0)||(img>0 && re<0))
                std::cout<<re<<"+"<<img<<"*i";
            else{
                if((img<0 && re<0)|| (img<0&&re>0))
                    std::cout<<re<<img<<"*i"<<"\n";
                }
            }
        }
    }
}

void ccomplex::modul(){
float x;
x=sqrt(re*re+img*img);
std::cout<<x;
}

void ccomplex::setRe(float x){
re=x;
}

void ccomplex::setImg(float x){
img=x;
}

float ccomplex::getRe(){
return re;
}

float ccomplex::getImg(){
return img;
}

ccomplex ccomplex::operator+(const ccomplex &A){
ccomplex C;
C.re=this->re+A.re;
C.img=this->img+A.img;
return C;
}

ccomplex ccomplex::operator-(const ccomplex&A){
ccomplex C;
C.re=this->re-A.re;
C.img=this->img-A.img;
return C;
}

ccomplex ccomplex::operator*(const ccomplex &A){
ccomplex C;
C.re=(this->re)*A.re-(this->img)*A.img;
C.img=(this->re)*A.img+(this->img)*A.re;
return C;
}

ccomplex operator*(const ccomplex &A, int x){
ccomplex C;
C.re=A.re*x;
C.img=A.img*x;
return C;
}

ccomplex ccomplex::operator/(const ccomplex &A){
ccomplex C;
C.re=(this->re * A.re + this->img * A.img) / (A.re * A.re + A.img * A.img);
C.img=(this->img * A.re - this->re * A.img) / (A.re * A.re + A.img * A.img);
return C;
}

ccomplex ccomplex::ssqrt(){
ccomplex C;
C.re=sqrt((re+sqrt(re*re+img*img)/2));
C.img=(img/2)*sqrt(2/(re+sqrt(re*re+img+img)));
return C;
}

void ccomplex::operator=(const ccomplex &x)
{
this->re=x.re;
this->img=x.img;
}

bool ccomplex::operator!=(const ccomplex &x)
{
    return this->re != x.re || this->img != x.img;
}

std::istream &operator>>(std::istream &cin, ccomplex &c)
{
    try
    {
        std::string real, imaginar;
        cin >> real;
        c.re = std::stof(real);
        cin >> imaginar;
        c.img = std::stof(imaginar);
        return cin;
    }
    catch (const std::invalid_argument &e)
    {
        throw(NuFloat());
    }
}

std::ostream &operator<<(std::ostream &cout, const ccomplex &c){
if (c.img==0&&c.re==0)
    std::cout<<"0"<<"\n";
else{
    if(c.img==0)
        std::cout<<c.re<<"\n";
    else{
        if(c.re==0)
            std::cout<<c.img<<"*i"<<"\n";
        else{
            if((c.img>0 && c.re>0)||(c.img>0 && c.re<0))
                std::cout<<c.re<<"+"<<c.img<<"*i";
            else{
                if((c.img<0 && c.re<0)|| (c.img<0 && c.re>0))
                    std::cout<<c.re<<c.img<<"*i"<<"\n";
                }
            }
        }
    }
}
bool ccomplex::operator==(const ccomplex &x)
{
    return this->re == x.re && this->img == x.img;
}
