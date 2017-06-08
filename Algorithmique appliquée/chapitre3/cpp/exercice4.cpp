/*  programme premier(exercice4)
*   but: controle si un nombre est premier utilisant une bibliotheque rudimentaire
*   date: 24/10/2016
*/
#include <iostream>
#include <maBiblio.h>

using namespace std;

/* fonction estPremier
*  but : indique si le nombre est premier
*  entrée : val (entier) reçoit le nombre entier à tester
*  sortie : bool premier indiquant si le test est positif ou negatif
*/

int main(int argc, char *argv[]){
    unsigned int val;

    cout << "Entrez un nombre entier(0 pour sortir) = ";
    cin >> val;
    while(val != 0){
        cout << boolalpha << estPremier(val) << "\n" << endl;
        cout << "Entrez un nombre entier(0 pour sortir) = ";
        cin >> val;
    }
    return 0;
}
