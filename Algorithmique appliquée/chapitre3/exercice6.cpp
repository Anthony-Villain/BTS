/* programme nombres (exercice 6)
*  but : différents traitements sur des nombres
*  date : 31/10/2017
*/
#include <iostream>
#include <maBiblio.h>

using namespace std;

int main(int argc, char *argv[]){
    cout << "filou";
    char choix;
    unsigned int nb;

    choix = 'Z';
    while( choix != 'Q' && choix != 'q'){
        cout << endl << "50 premiers multiples d'un nombre....... 1 \n";
        cout << endl << "facteurs premiers d'un nombre........... 2 \n";
        cout << endl << "50 premiers nombres premiers............ 3 \n";
        cout << endl << "quitter....... Q \n";
        cin >> choix;

        if(choix == '1'){
            cout << "entrer un nombre = ";
            cin >> nb;
            multiples(nb,50);
        }
        if(choix == '2'){
            cout << "entrer un nombre = ";
            cin >> nb;
            facteursPremiers(nb);
        }
        if(choix == '3'){
            nombresPremiers(50);
        }

    }
    return 0;
}

