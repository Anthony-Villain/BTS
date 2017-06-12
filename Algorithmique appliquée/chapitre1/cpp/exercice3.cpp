/*  programme somme(exercice3)
*   but: somme de nombres entre deux bornes
*   date: 15/09/2016
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    unsigned int min, max, k,somme =0;

    cout << "entrez les bornes: \n";
    cin >> min >> max;

    for(k=min;k < max;k++){
        somme += k;
    }
    cout << "La somme des valeurs est = " << somme;
    return 0;
}
