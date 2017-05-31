/*  programme etBinaire(exercice8)
*   but: opération logique ET entre 2 nombres binaires
*   date: 21/09/2016
*/

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]){
    string binaire;
    int k;
    unsigned int val1, val2,resultat;

    cout << "entrez la première valeur binaire =\n";
    cin >> binaire;

    // conversion en base 2 du premier nombre
    val1 =0;
    for(k=0; k < binaire.length(); k++){
        val1 = val1 << 1;
        if(binaire[k] == '1'){
            val1 = val1 | 1;
        }
    }

    cout << "entrez la seconde valeur binaire =\n";
    cin >> binaire;

    // conversion en base 2 du second nombre
    val2 =0;
    for(k=0; k < binaire.length(); k++){
        val2 = val2 << 1;
        if(binaire[k] == '1'){
            val2 = val2 | 1;
        }
    }

    cout <<"conversion en base 10 = " << val1 << "\n";
    cout << "conversion en base 10 =" << val2 << "\n";

    // calcul du ET entre les deux valeurs
    resultat = val1& val2;
    cout << "resultat du ET en base 10 = " << resultat << "\n";

    //conversion en binaire du ET
    binaire = "";
    while(resultat != 0){
        char c = (resultat%2) + '0';
        binaire = c + binaire;
        resultat /= 2;
    }
    cout << "resultat du ET en binaire = " << binaire << "\n";

    return 0;
}
