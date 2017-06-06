/*  programme conversions(exercice6)
*   but: conversion d'entiers en binaires
*   date: 21/09/2016
*/
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){

    char choix='z';
    string binaire;
    int val,nb,k;

    while(choix !=  'Q' && choix != 'q'){
        cout << "conversion entier vers binaire......1\n";
        cout << "conversion binaire vers entier......2\n";
        cout << "quitter.............................Q\n";
        cin >> choix;

        if(choix == '1'){
            cout << "entre un nombre entier\n";
            cin >> val;

            binaire = "";
            while(val != 0){
                 // r�cup�ration du reste et conversion en caract�re
                 char c = (val%2) + '0';
                 // concat�nation du caract�re
                 binaire = c + binaire;
                 val /= 2;
            }
            cout << binaire << "\n";
        }
        else{
            if(choix == '2'){
                val = 0;
                k=0;
                cout << "entre un nombre binaire \n";
                cin >> binaire;
                /*
                while(binaire.size() > 0){
                    // extraction du dernier caract�re de binaire
                    string lastcaractere = binaire.substr(binaire.size()-1,1);
                    // conversion du caract�re en entier
                    istringstream myStream(lastcaractere);
                    int result;
                    myStream >>result;
                    // ajout du bit r�cup�r� multipli� par la puissance de 2
                    val += result * pow(2,k);
                    // on enl�ve le dernier caract�re
                    binaire = binaire.substr(0,binaire.size()-1);
                    k++;}
                */
                    for(int k =0; k < binaire.length(); k++){
                        val = val << 1;
                        if(binaire[k] == '1'){
                            val =val | 1;
                            cout << val;
                        }
                    }
                }
                cout << "conversion en base 10 =" << val<< "\n";
            }

        }
    return 0;
}
