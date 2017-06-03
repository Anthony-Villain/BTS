/* programme binaire/entier (exercice 2)
*  but : permet de saisie plusieurs valeurs binaires et de faire un ET binaire entre eux et d'afficher le resultat en base 10 et 2
*  date : 10/10/2016
*/

#include <iostream>
#include <string>

using namespace std;

/* fonction convertBinaireEntier
*  but : convertit un binaire en entier
*  entrée : unBinaire (chaîne) reçoit le binaire à convertir
*  sortie : entier contenant la conversion
*/

unsigned int convertBinaireEntier(string unBinaire) {
    unsigned int nb = 0 ;
    unsigned int val = 0 ;
    for(int i=0; i < unBinaire.size(); i++){
        val = val << 1;
        if(unBinaire[i] == '1'){
            val = val | 1;
        }
    }
    return val ;
}

/* fonction convertEntierBinaire
*  but : convertit une nombre entier en binaire
*  entrée : unEntier (entier) reçoit le nombre à convertir
*  sortie : chaîne contenant la conversion
*/

string convertEntierBinaire(unsigned int nbEntier){
    string binaire="";
    while(nbEntier != 0){
        char c = (nbEntier % 2) +'0';
        binaire = c + binaire;
        nbEntier /= 2;
    }
    return binaire;
}

int main(int argc, char *argv[]){
    // déclarations
    string binaire ;
    unsigned int nb1, nb2 ;
    unsigned int resultat ;

    // saisie du  premier nombre binaire
    cout << "Entrez un premier nombre binaire = " ;
    cin >> binaire ;

    // conversion en entier du premier nombre
    nb1 = convertBinaireEntier(binaire) ;
    cout << "conversion en base 10 = " << nb1 ;

    // saisie du  second nombre binaire
    cout << endl << "Entrez un second nombre binaire = " ;
    cin >> binaire ;

    // conversion en entier du second nombre
    nb2 = convertBinaireEntier(binaire) ;
    cout << "conversion en base 10 = " << nb2 ;

    // calcul du ET entre les 2
    resultat = nb1 & nb2 ;
    cout << endl << "résultat du ET en base 10 = " << resultat ;

    // conversion du résultat pour l'affichage
    cout << endl << "conversion en binaire = " << convertEntierBinaire(resultat) ;

    return 0;
}
