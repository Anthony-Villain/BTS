/* programme graphes (tp 3)
*  but : calcul des chemins de longueur p et de la fermeture transitive d'un graphe
*  date : 13/11/2016
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <myconio.h>
#include <string.h>

using namespace std;

#define N 100

unsigned int matrice[N][N] ; // matrice d'adjacence du graphe
unsigned int taille ; // nombre de neouds du graphe

/* fonction saisieEntierControle
*  but : saisie d'une valeur entière avec contrôle
*  entrée : message (chaine) message à afficher avant la saisie
*           min, max (entier) bornes limites pour la saisie
*  sortie : valeur saisie
*/
int saisieEntierControle (string message, // message à afficher
                          int min, int max, // bornes de la saisie
                          int x, int y) {  // position de la saisie
    int valeur ;
    do {
        gotoxy(x, y) ;
        cout << message ;
        cin >> valeur ;
    }while(valeur<min || valeur>max) ;
    return valeur ;
}

/* procedure afficheMatrice
*  but : affichage d'une matrice
*/
void afficheMatrice (unsigned int m[N][N], unsigned int taillem, int x, int y) {
    for (int j=0 ; j<taillem ; j++){
        for (int i=0 ; i<taillem ; i++) {
            gotoxy(x+i*4+2, y+j*2+4) ;
            cout << m[i][j] ;
        }
    }

}

/* procedure saisieMatrice
*  but : saisie d'une matrice
*/
void saisieMatrice() {
    system("cls") ;
    taille = saisieEntierControle("Nombre de noeuds du graphe = ", 1, 100, 1, 1) ;
    cout << "Saisie de la matrice d'adjacence du graphe (0 ou 1) : " ;
    // affichage des points
    for (int j=0 ; j<taille ; j++) {
        for (int i=0 ; i<taille ; i++) {
            gotoxy(i*4+2, j*2+4) ; cout << "." ;
        }
    }
    // saisie de la matrice
    for (int j=0 ; j<taille ; j++) {
        for (int i=0 ; i<taille ; i++) {
            matrice[i][j] = saisieEntierControle("", 0, 1, i*4+2, j*2+4) ;
        }
    }
}

/* procedure longueurs
*  but : calcul de la matrice des chemins de longueur p
*/
void longueurs() {
    system("cls") ;
    // contrôle si une matrice a été saisie
    if (taille==0) {
        cout << "Vous devez d'abord saisir une matrice d'adjacence..." ;
    }else{
        // saisie de la longueur
        int p = saisieEntierControle("Longueur du chemin = ", 1, taille, 1, 1) ;
        unsigned int puissance[N][N] ;
        // copie de la matrice d'origine dans une matrice de transition
        unsigned int transition[N][N] ;
        memcpy(transition, matrice, sizeof matrice) ;
        // calcul de la puissance
        for (int k=1 ; k<p ; k++) {
            // la matrice est élevée au carré
            for (int j=0 ; j<taille ; j++) {
                for (int i=0 ; i<taille ; i++) {
                    puissance[i][j] = 0 ;
                    for (int m=0 ; m<taille ; m++) {
                        puissance[i][j] += transition[i][m]*matrice[m][j] ;
                    }
                }
            }
            // transfert de la matrice pour passer à la puissance suivante
            memcpy(transition, puissance, sizeof puissance) ;
        }

        // affichage des 2 matrices
        afficheMatrice(matrice, taille, 1, 1) ;
        afficheMatrice(puissance, taille, 1, taille*2 + 4) ;
    }
}

/* procedure fermeture
*  but : calcul de la matrice de la fermeture transitive
*/
void fermeture() {
    system("cls") ;
    // contrôle si une matrice a été saisie
    if (taille==0) {
        cout << "Vous devez d'abord saisir une matrice d'adjacence..." ;
    }else{
        unsigned int fermtrans[N][N] ;
        // copie de la matrice d'origine dans une matrice de fermeture transitive
        memcpy(fermtrans, matrice, sizeof matrice) ;
        // algorithme de warshall
        for (int i=0 ; i<taille ; i++) {
            fermtrans[i][i] = 1 ;
        }
        for (int k=0 ; k<taille ; k++) {
            for (int i=0 ; i<taille ; i++) {
                for (int j=0 ; j<taille ; j++) {
                    fermtrans[i][j] = fermtrans[i][j] || (fermtrans[i][k] && fermtrans[k][j]) ;
                }
            }
        }

        afficheMatrice(matrice, taille, 1, 1) ;
        afficheMatrice(fermtrans, taille, 1, taille*2 + 4) ;
    }

}


int main()
{
    char choix = 'Z' ; // mémorisation du choix de l'utilisateur
    taille = 0 ; // nombre de neouds

    while (choix != 'Q' && choix != 'q') {
        cout << endl ;
        cout << endl << "Saisie d'une nouvelle matrice ............... 1" ;
        cout << endl << "Matrice des chemins de longueur p ........... 2" ;
        cout << endl << "Fermeture transitive ........................ 3" ;
        cout << endl << "Quitter ..................................... Q" ;
        cout << endl << "Choix :                                       " ;
        cin >> choix ;

        if (choix=='1') {
            saisieMatrice() ;
        }else{
            if (choix=='2') {
                longueurs() ;
            }else{
                if (choix=='3') {
                    fermeture() ;
                }
            }
        }

    }

    return 0;
}
