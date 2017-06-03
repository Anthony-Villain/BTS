#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED

#include <math.h>

using namespace std;

/* fonction premier
*  but : contrôle si un entier naturel est premier
*  entrée : unEntier (entier naturel) contient le nombre à contrôler
*  sortie : booléen (vrai si le nombre est premier)
*/
bool premier(unsigned int unEntier) {
    // boucle sur la recherche d'un diviseur
    unsigned int diviseur = 2 ;
    bool p = true ; // mémorise si le nombre est premier ou non
    while (p && diviseur*diviseur<=unEntier) {
        if (unEntier % diviseur == 0) {
            p = false ;
        }
        diviseur++ ;
    }
    return p ;
}

/* procedure multiples
*  but : affiche les multiples d'un nombre
*  entrée : unNombre (entier naturel) le nombre dont les multiples doivent être affichés
*           nbMultiples (entier naturel) nombre de multiples à afficher
*/
void multiples(unsigned int unNombre, unsigned int nbMultiples) {
    for (int k=1 ; k<=nbMultiples ; k++) {
        cout << (unNombre*k) << " " ;
    }
}

/* procedure facteurPremiers
*  but : affiche les facteurs premiers d'un nombre
*  entrée : unNombre (entier naturel) le nombre dont les facteurs premiers doivent être affichés
*/
void facteursPremiers(unsigned int unNombre) {
    // recherche des facteurs premiers
    unsigned int diviseur = 2 ;
    while (diviseur<=unNombre) {
        // si on trouve un facteur premier
        if (unNombre%diviseur == 0) {
            // on l'affiche
            cout << diviseur << " " ;
            // on divise la valeur pour éviter les facteurs non premiers
            unNombre /= diviseur ;
        }else{
            diviseur++ ;
        }
    }
}

/* procedure nombresPremiers
*  but : affiche les premiers nombres premiers
*  entrée : nbPremiers (entier naturel) le nombre de nombres premiers à afficher
*/
void nombresPremiers(unsigned int nbNombre) {
    // déclarations
    unsigned int premier[1000] ; // tableau qui mémorisera les nombres premiers
    unsigned int k ; // k sera l'indice de boucle
    unsigned int max = 1 ; // max contiendra le nombre de cases remplies dans premier
    unsigned int nb = 3 ; // variable qui sera à tester

    // limitation de la taille à 1000 nombres
    if (nbNombre > 1000) {
        nbNombre = 1000 ;
    }

    // initialisation de la première case
    premier[0] = 2 ;

    // boucle sur la recherche des premiers
    while (max<nbNombre) {
        // test si le nombre contenu dans nb est premier
        k = 0 ;
        while (k<max && pow(premier[k], 2)<nb && nb%premier[k]!=0) {
            k++ ;
        }
        // si nb est premier, il est mémorisé
        if (nb%premier[k]!=0) {
            premier[max++] = nb ;
        }
        // passage au nombre suivant à tester
        nb++ ;
    }

    // affichage des 50 nombres premiers
    for (k=0 ; k<nbNombre ; k++) {
        cout << premier[k] << " " ;
    }

}

/* fonction factorielle
*  but : calcul de la factorielle d'un nombre
*  entrée : unEntier (entier naturel) le nombre dont la factorielle doit être calculée
*  sortie : entier contenant la factorielle
*/
unsigned int factorielle(unsigned int unEntier) {
    if (unEntier==1) {
        return 1 ;
    }else{
        return unEntier * factorielle(unEntier - 1) ;
    }
}


#endif // MABIBLIO_H_INCLUDED
