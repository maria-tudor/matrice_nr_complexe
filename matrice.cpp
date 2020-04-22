#include "matrice.h"
#include "goala.h"
#define dim_matrice 50
matrice::matrice(){
this->v = new ccomplex *[dim_matrice];
    for (int i = 0; i < dim_matrice; ++i)
    {
        (this->v)[i] = new ccomplex[dim_matrice];
    }
    std::cout<<"constru fara matrice\n";
}
matrice::matrice(int n, int m, ccomplex **v): matrice::matrice(){
    if (n<=0 || m<=0){
        throw(goala());
    }
    for (int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            (this->v)[i][j] = v[i][j];
        }
    }
    std::cout<<"constr cu matrice\n";
}

matrice::matrice(const matrice &m){
    for(int i=0; i<dim_matrice; i++){
        for(int j=0; j<dim_matrice; j++){
            (this->v)[i][j]=(m.v)[i][j];
        }
    }
    std::cout<<"copy constr matrice\n";
}

matrice::~matrice()
{
    for (int i = 0; i <dim_matrice; i++){
        delete[](this->v)[i];
    }
    delete[](this->v);
    std::cout<<"~matrice\n";
}
