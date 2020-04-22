#include "matrice_patratica.h"
#include "goala.h"
#include "math.h"

matrice_patratica::matrice_patratica(){
this->dim=0;
std::cout<<"constructor fara matrice_patratica";
}

matrice_patratica::matrice_patratica(int dim, ccomplex **v):matrice::matrice(dim, dim, v){
    this->dim=dim;
    std::cout<<"constructor cu matrice_patratica";
}

matrice_patratica::~matrice_patratica(){
    std::cout<<"~matrice_patratica";
}

matrice_patratica::matrice_patratica(const matrice_patratica &M) :matrice::matrice(M){
    this->dim=M.dim;
    for(int i=0; i<this->dim;i++){
        for(int j=0; j<this->dim;j++){
            (this->v)[i][j]=(M.v)[i][j];
        }
    }
    std::cout<<"copy matrice_patratica";
}

bool matrice_patratica::diagonala(){
    for(int i=0; i<this->dim; i++){
        for(int j=0; j<this->dim; j++){
            if ((this->v)[i][j]!=ccomplex(0,0) && i!=j)
                return false;
        }
    }
    return true;
}

void matrice_patratica::afisare(){
    for(int i=0; i<this->dim; i++){
        for(int j=0; j<this->dim; j++){
            (this->v)[i][j].ccomplex::afisare();
            std::cout<<" ";
        }
        std::cout<<"\n";
    }
}

ccomplex matrice_patratica::determinant() const
{   int lin=this->dim;
    ccomplex w[this->dim][this->dim];
    for(int i=0; i<this->dim; i++){
        for(int j=0; j<this->dim; j++){
            w[i][j]=(this->v)[i][j];
        }
    }
    int index;
    ccomplex nr1,nr2,det(1,0), total(1,0);
    ccomplex temp[this->dim + 1];
    for(int i = 0; i < this->dim; i++){
        index = i;
        while((this->v)[index][i] == ccomplex(0,0) && index < this->dim) {
            index++;
        }
        if(index == this->dim) {
            continue;
        }
        if(index != i){
            for(int j = 0; j < this->dim; j++){
                std::swap((this->v)[index][j],(this->v)[i][j]);
            }
                det = det*pow(-1,index-i);
       }

       for(int j = 0; j < this->dim; j++){
           temp[j] = (this->v)[i][j];
       }

       for(int j = i+1; j < this->dim; j++){
           nr1 = temp[i];
           nr2 = (this->v)[j][i];
           for(int k = 0; k <this->dim; k++){
               (this->v)[j][k] = (nr1 * (this->v)[j][k]) - (nr2 * temp[k]);
           }
           total = nr1*total;
           }
    }
    for(int i = 0; i < this->dim; i++){
        det = det * (this->v)[i][i];
    }
    for(int i=0; i<lin; i++){
        for(int j=0;j<lin;j++){
            (this->v)[i][j]=w[i][j];
        }
    }
    return (det/total);
    }

std::istream &operator>>(std::istream &cin, matrice_patratica &M){
    std::cout << "nr linii si coloane:\n";
    cin>>M.dim;
    if(M.dim <= 0){
        throw(goala());
    }
    for (int i = 0; i < M.dim; i++){
        for (int j = 0; j < M.dim; j++){
            std::cout<<"M["<<i<<"]["<<j<<"]=\n";
            cin>>(M.v)[i][j];
        }
    }
    return cin;
}

std::ostream &operator<<(std::ostream &cout, const matrice_patratica &M)
{
    cout<<"\n";
    for (int i = 0; i < M.dim; i++){
        for (int j = 0; j < M.dim; j++){
            (M.v)[i][j].ccomplex::afisare();
            cout<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    return cout;
}

void matrice_patratica::operator=(const matrice_patratica &M){
    this->dim=M.dim;
    for (int i = 0; i < M.dim; i++){
        for (int j = 0; j < M.dim; j++){
            (this->v)[i][j] = (M.v)[i][j];
        }
    }
}
