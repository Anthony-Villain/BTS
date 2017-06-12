/* programme Hanoi (exercice 2)
*  but : résolution des déplacements des tours de Hanoi pour 4 disques
*  date : 14/12/2016
*/

#include <iostream>

using namespace std;

/* procedure Hanoi
*  but : affiche les déplacements nécessaires pour le problème des tours de Hanoi
*  entrée : N (entier) nombre de disques
*           depart, milieu, arrivee : noms des poteaux
*/
void Hanoi(unsigned int N, char depart, char milieu, char arrivee) {
    if (N>=1) {
        Hanoi(N-1, depart, arrivee, milieu) ;
        cout << endl << "d\x82placer 1 disque de " << depart << " vers " << arrivee ;
        Hanoi(N-1, milieu, depart, arrivee) ;
    }
}

/* PROGRAMME PRINCIPAL */
int main()
{
    Hanoi(4, 'A', 'B', 'C') ;
    return 0;
}
