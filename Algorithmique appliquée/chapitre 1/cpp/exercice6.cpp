/*  programme premier(exercice6)
*   but: contr�le si un nombre est premier ou non
*   date: 21/09/2016
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    unsigned int val,diviseur;
    bool premier;

    while(val != 0){
        cout << "entrez un nombre entier(0 pour sortir):\n";
        cin >> val;
        diviseur =2;
        premier = true;

        // boucle sur la recherche d'un diviseur
        while(premier && diviseur*diviseur <= val){
            if(val % diviseur == 0){
                premier = false;
            }
            diviseur = diviseur +1;
        }

        if(premier){
            cout << val << " est un nombre premier\n";
        }else{
            cout << val << " n'est pas premier\n";
        }
    }
    return 0;
}
