/* programme facteursPremiers (exercice 7)
*  but : saisir des valeurs, afficher les facteurs premiers, puis au final
*        afficher une seule fois chaque facteur premier qui est apparu
*        Ceci est la version optimisée
*  date : 26/10/2016
*/
#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
    unsigned int facteur[100];
    unsigned int valeur, diviseur;
    unsigned int i,j;
    unsigned int maxM;


    cout << "entrer une valeur (0 pour sortir) =";
    cin >> valeur;
    while (valeur != 0){
        diviseur =2;
        while(diviseur <= 0){
            // il s'agit d'un nombre premier
            if(valeur%diviseur ==0){
                //on l'affiche
                cout << diviseur << " ";
                i =0;
                while (i < maxM && facteur[i]!=diviseur){
                    i++;
                }
                if(i==maxM){
                    facteur[maxM++] = diviseur;
                }
                valeur /= diviseur;
            }else{
                diviseur++;
            }
        }
        cout << endl << "Tous les facteurs premiers = ";
        cin >> valeur;
    }

    cout << endl << "tous les facteurs premiers =" << " ";
    for(j=0;j < maxM;j++){
        cout << facteur[j] << " ";
    }

    return 0;
}
