/*  programme produitPuissance(exercice5)
*   but: calcul du produit de puissance de 2
*   date: 15/09/2016
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){

    unsigned int k,n, produit =0;

    cout << "entrez la valeur max= ";
    cin >> n;

    for(k=1;k <= n ;k++){
        produit *= pow(2,k);
    }
    cout << "Le produit des 2 puissance k = " << produit;
    return 0;
}
