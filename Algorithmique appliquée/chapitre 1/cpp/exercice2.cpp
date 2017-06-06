/*  programme table(exercice2)
*   but: affiche la table de 1 à 9 de la valeur entrée
*   date: 15/09/2016
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    unsigned int table, k;

    do{
        cout << "quelle table voulez-vous afficher entre 1 et 9? ";
        cin >> table;
    }while(table < 1 || table > 9);


    for(k=0;k<13;k++){
        cout << table << "*" << k << "=" << table*k << "\n";
    }
    return 0;
}
