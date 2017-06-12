/*  programme table(exercice1)
*   but: affiche la table de la valeur entrée
*   date: 15/09/2016
*/
#include <stdio.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[]){

    unsigned table, k, resultat;

    cout << "quelle table voulez-vous afficher? ";
    cin >> table;

    for(k=0;k<13;k++){
        resultat = table*k;
        cout << table << "*" << k << "=" << resultat << "\n";
     }

    return 0;
}
