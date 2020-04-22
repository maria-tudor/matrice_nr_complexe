#include "matrice_oarecare.h"
#include "goala.h"
matrice_oarecare::matrice_oarecare(){
this->n=0;
this->m=0;
std::cout<<"const fara matrice_oarecare\n";
}
matrice_oarecare::matrice_oarecare(int n, int m, ccomplex **v): matrice::matrice(n,m,v){
this->n=n;
this->m=m;
std::cout<<"const cu matrice_oarecare\n";
}

matrice_oarecare::~matrice_oarecare(){
    std::cout<<"~matrice_oarecare\n";
}

matrice_oarecare::matrice_oarecare(const matrice_oarecare &A):matrice::matrice(A){
this->n=A.n;
this->m=A.m;
for(int i=0; i<A.n;i++){
    for(int j=0; j<A.m;j++){
        (this->v)[i][j]=(A.v)[i][j];
    }
}
std::cout<<"copy matrice_oarecare";
}


bool matrice_oarecare::diagonala(){
    for(int i=0; i<this->n; i++){
        for(int j=0; j<this->m; j++){
            if ((this->v)[i][j]!=ccomplex(0,0) && i!=j)
                return false;
        }
    }
    return true;
}

std::istream &operator>>(std::istream &cin, matrice_oarecare &M){
    std::cout << "nr linii:\n";
    cin>>M.n;
    std::cout << "nr coloane:\n";
    cin>>M.m;
    if(M.n <= 0 || M.m <= 0){
        throw(goala());
    }
    for (int i = 0; i < M.n; i++){
        for (int j = 0; j < M.m; j++){
            std::cout<<"M["<<i<<"]["<<j<<"]=\n";
            cin>>(M.v)[i][j];
        }
    }
    return cin;
}

std::ostream &operator<<(std::ostream &cout, const matrice_oarecare &M)
{
    cout<<"\n";
    for (int i = 0; i < M.n; i++){
        for (int j = 0; j < M.m; j++){
            (M.v)[i][j].ccomplex::afisare();
            cout<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    return cout;
}

void matrice_oarecare::operator=(const matrice_oarecare &M){
    this->n=M.n;
    this->m=M.m;
    for (int i = 0; i < M.n; i++){
        for (int j = 0; j < M.m; j++){
            (this->v)[i][j] = (M.v)[i][j];
        }
    }
}




