/*  programme 50premiers(exercice 2)
*   but: affichage des 50 premiers nombres premiers avec recherche optimis�e
*   date: 6/10/2016
*/
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char *argv[]){
    int nbPremier[50]; // tableau qui m�morisera les nombres premiers
    unsigned int maximum=1; // continent le nombre de cases remplies dans premier
    unsigned int k; //indice de la boucle
    unsigned int nb =3; // nb � tester (3 car 2 est d�j� enregistr� dans le vecteur)

    nbPremier[0] = 2;

    while(maximum != 50){
        k=0;
        while(k<maximum && pow(nbPremier[k],2)<nb && nb%nbPremier[k] !=0){
            k++;
        }
        if(nb%nbPremier[k]!=0){
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
