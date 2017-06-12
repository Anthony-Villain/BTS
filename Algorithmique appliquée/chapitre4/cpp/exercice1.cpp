/* programme factorielles (exercice 1)
*  but : saisir des entiers naturels et afficher leurs factorielles
*  date : 12/12/2016
*/

#include <iostream>
#include <maBiblio.h>

using namespace std;

int main()
{
    unsigned int nb ;
    cout << "Entrez un nombre (0 pour finir) = " ;
    cin >> nb ;
    while (nb != 0) {
        cout << "factorielle = " << factorielle(nb) ;
        cout << endl << "Entrez un nombre (0 pour finir) = " ;
        cin >> nb ;
    }

    return 0;
}
