/*  programme sommePuissance(exercice4)
*   but: calcul de la somme de puissances de 2
*   date: 15/09/2016
*/
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){

    unsigned int k,n, somme =0;

    cout << "entrez la valeur max= ";
    cin >> n;

    for(k=1;k <= n ;k++){
        somme += pow(2,k);
    }
    cout << "La somme des 2 puissances k = " << somme;
    return 0;
}
