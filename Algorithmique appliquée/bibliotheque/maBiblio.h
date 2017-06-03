#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED

#include <math.h>

using namespace std;

/* fonction premier
*  but : contr�le si un entier naturel est premier
*  entr�e : unEntier (entier naturel) contient le nombre � contr�ler
*  sortie : bool�en (vrai si le nombre est premier)
*/
bool premier(unsigned int unEntier) {
    // boucle sur la recherche d'un diviseur
    unsigned int diviseur = 2 ;
    bool p = true ; // m�morise si le nombre est premier ou non
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
*  entr�e : unNombre (entier naturel) le nombre dont les multiples doivent �tre affich�s
*           nbMultiples (entier naturel) nombre de multiples � afficher
*/
void multiples(unsigned int unNombre, unsigned int nbMultiples) {
    for (int k=1 ; k<=nbMultiples ; k++) {
        cout << (unNombre*k) << " " ;
    }
}

/* procedure facteurPremiers
*  but : affiche les facteurs premiers d'un nombre
*  entr�e : unNombre (entier naturel) le nombre dont les facteurs premiers doivent �tre affich�s
*/
void facteursPremiers(unsigned int unNombre) {
    // recherche des facteurs premiers
    unsigned int diviseur = 2 ;
    while (diviseur<=unNombre) {
        // si on trouve un facteur premier
        if (unNombre%diviseur == 0) {
            // on l'affiche
            cout << diviseur << " " ;
            // on divise la valeur pour �viter les facteurs non premiers
            unNombre /= diviseur ;
        }else{
            diviseur++ ;
        }
    }
}

/* procedure nombresPremiers
*  but : affiche les premiers nombres premiers
*  entr�e : nbPremiers (entier naturel) le nombre de nombres premiers � afficher
*/
void nombresPremiers(unsigned int nbNombre) {
    // d�clarations
    unsigned int premier[1000] ; // tableau qui m�morisera les nombres premiers
    unsigned int k ; // k sera l'indice de boucle
    unsigned int max = 1 ; // max contiendra le nombre de cases remplies dans premier
    unsigned int nb = 3 ; // variable qui sera � tester

    // limitation de la taille � 1000 nombres
    if (nbNombre > 1000) {
        nbNombre = 1000 ;
    }

    // initialisation de la premi�re case
    premier[0] = 2 ;

    // boucle sur la recherche des premiers
    while (max<nbNombre) {
        // test si le nombre contenu dans nb est premier
        k = 0 ;
        while (k<max && pow(premier[k], 2)<nb && nb%premier[k]!=0) {
            k++ ;
        }
        // si nb est premier, il est m�moris�
        if (nb%premier[k]!=0) {
            premier[max++] = nb ;
        }
        // passage au nombre suivant � tester
        nb++ ;
    }

    // affichage des 50 nombres premiers
    for (k=0 ; k<nbNombre ; k++) {
        cout << premier[k] << " " ;
    }

}

/* fonction factorielle
*  but : calcul de la factorielle d'un nombre
*  entr�e : unEntier (entier naturel) le nombre dont la factorielle doit �tre calcul�e
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
