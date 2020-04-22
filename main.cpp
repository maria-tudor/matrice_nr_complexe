#include <iostream>
#include "ccomplex.h"
#include "math.h"
#include "matrice.h"
#include "matrice_oarecare.h"
#include "matrice_patratica.h"
#include "goala.h"
#include "NuFloat.h"
using namespace std;


void citire_oarecare(int n){
        matrice_oarecare *m=new matrice_oarecare[n];
        cout<<"nr matrici oarecare citite:\n";
        for (int i=0; i<n; i++){
            cout<<"matrice"<<i<<"\n";
            cin>>m[i];
        }
        for (int i = 0; i < n; ++i){
            cout << m[i];
        }
    delete[] m;
    }

void citire_patratica(int n){
    matrice_patratica *m=new matrice_patratica[n];
    cout<<"nr matrici patratice citite:\n";
    for(int i=0; i<n; i++){
        cout<<"matricea "<<i<<"\n";
        cin>>m[i];
    }
    for(int i=0; i<n; i++){
        cout<<m[i];
    }
    delete[] m;
    }

int main()
{/*
    //matrice patratica op>> si afisare() + constructor fara parametrii
    matrice_patratica M;
    cin>>M;
    M.afisare();
    //functia diagonala, care determina daca o matrice triunghiulara e si diagonala
    cout<<M.diagonala();
    cout<<"\n";
    //determinantul matricii patratice + op<<
    (M.determinant()).afisare();
    cout<<"\n";
    cout<<M;
    cout<<"\n";
    */

    /*
    //matrice_patratica constructorul cu parametrii
    int lin;
        cout<<"Nr de linii si coloane din matricea patratica:\n";
        cin>>lin;
        ccomplex **v=new ccomplex*[lin];
         for (int i = 0; i < lin; ++i)
            v[i] = new ccomplex[lin];
            cout<<"Elementele din matricea patratica:\n";
        for (int i = 0; i < lin; ++i){
            for (int j = 0; j < lin; ++j){
                cin>>v[i][j];
            }
        }
       matrice_patratica L(lin,v);
       cout<<L;
       */

       /*
       //op=
       matrice_patratica K;
       K=L;
       cout<<K;
*/



    //matrice oarecare constructor, op>>, op<<

  /*  matrice_oarecare N;
    cin>>N;
    cout<<N;
    cout<<"\n";
*/


/*
//matrice_oarecare op=
matrice_oarecare A;
cin>>A;
cout<<A;
matrice_oarecare B;
B=A;
cout<<B;
*/

    /*

        //constructor cu parametrii matrice_oarecare
        int n,m;
        cout<<"Nr de linii din matricea oarecare:\n";
        cin>>n;
        cout<<"nr de coloane din matricea oarecare:\n";
        cin>>m;
        ccomplex **v=new ccomplex*[n];
         for (int i = 0; i < n; ++i)
            v[i] = new ccomplex[m];
            cout<<"Elementele din matricea oarecare:\n";
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin>>v[i][j];
            }
        }
       matrice_oarecare P(n,m,v);
       cout<<P;

       //functia diagonala matrice_oarecare
       cout<<P.diagonala();
*/

//citire n matrici oarecare, m matrici patratice

/*
    try{
    int n,m;
    cin>>n;
    citire_oarecare(n);
    cin>>m;
    citire_patratica(m);

    }
    catch (const goala &e)
    {
        cout << e.what() << "\n";
    }
    catch (const NuFloat &e)
    {
        cout << e.what() << "\n";
    }*/

    return 0;
}
