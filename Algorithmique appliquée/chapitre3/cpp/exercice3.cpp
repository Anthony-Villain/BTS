/*  programme premier(exercice3)
*   but: controle si un nombre est premier
*   date: 17/10/2016
*/
#include <iostream>

using namespace std;

/* fonction estPremier
*  but : indique si le nombre est premier
*  entrée : val (entier) reçoit le nombre entier à tester
*  sortie : bool premier indiquant si le test est positif ou negatif
*/
bool estPremier(int val){
    bool premier;
    unsigned int diviseur;
    diviseur =2;
    premier = true;
    while(premier && diviseur*diviseur <= val){
        if(val%diviseur == 0){
            premier =false;
        }
        diviseur +=1;
    }
    return premier;
}

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
