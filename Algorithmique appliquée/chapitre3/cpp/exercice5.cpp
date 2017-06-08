/* programme 50premiers (exercice 5)
*  but : reprise de l'exercice 2 de la séquence 2, en incluant la bibliothèque maBiblio
*  date : 25/10/2016
*/
#include <iostream>
#include <maBiblio.h>
#include <math.h>
using namespace std;


int main(int argc, char *argv[]){
    int nbPremier[50]; // tableau qui mémorisera les nombres premiers
    unsigned int maximum=1; // continent le nombre de cases remplies dans premier
    unsigned int k; //indice de la boucle
    unsigned int nb =3; // nb à tester (3 car 2 est déjà enregistré dans le vecteur)

    nbPremier[0] = 2;

    while(maximum != 50){
        k=0;
        while(k<maximum && pow(nbPremier[k],2)<nb && nb%nbPremier[k] !=0){
            k++;
        }
        if(estPremier(nb)){
            nbPremier[maximum++]=nb;
        }
        nb++;
    }

    //afficher les nombres premiers
    for(k=0;k< 50; k++){
        cout << nbPremier[k] << " ";
    }
    return 0;
}
