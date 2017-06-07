/* programme polynome
*  but : saisie d'un polynome et calcul de f(x) en fonction de x
   date: 05/10/2016
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    unsigned degre;
    int k;
    int a[6];
    float resultat, x;
    char choix;

    do{
        cout << "Entrez le degré du polynome (maximum 6) =";
        cin >> degre;
    }while(degre >6);

    //saisie des termes du polynômes
    for(k=0; k <=degre;k++){
        cout << "a" << k << "=";
        cin >> a[k];
    }

    //affichage du polynome
    cout << "f(X) =" << a[0];
    for(k=1; k<=degre;k++){
        cout << "+" << a[k] << "*X^" << k;
    }
    cout << endl;

    do{
        cout << "X =";
        cin >> x;
        resultat =0;
        for(k=0; k<=degre;k++){
            resultat += a[k] * pow(x,k);
        }
        cout << "f(X) = " << resultat << "\n";
        // demande si l'utilisateur veut continuer
        cout << "Voulez-vous continuer?(O/N) =";
        cin >> choix;

    }while(choix == '0' || choix == 'o');

    return 0;

}
