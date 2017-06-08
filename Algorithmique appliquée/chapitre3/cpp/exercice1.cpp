/* programme racine (exercice 1)
*  but : permet de saisie plusieurs valeurs et d'afficher à chaque fois la racine carrée
*  date : 3/10/2016
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){

    unsigned int nb;

    cout << "Entrez une valeur (0 pour finir) = ";
    cin >> nb;

    while(nb!= 0){
        cout << "racine carr\x82e = " << sqrt(nb);
        cout << endl << "Entrez une valeur =";
        cin >> nb;
    }
    return 0;
}
