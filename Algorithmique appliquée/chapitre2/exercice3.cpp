/*  programme matrices(exercice 3)
*   but: saisir et additionner deux matrices
*   date: 11/10/2016
*/
#include <iostream>
#include <myconio.h>


using namespace std;

int main(int argc, char *argv[]){

    unsigned int m1[3][3], m2[3][3];
    int i,j;

    // afficher les matrices
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            gotoxy(i*4+1, j*2+1); cout <<".";
            gotoxy(i*4+21, j*2+1); cout <<".";
        }
    }

    gotoxy(16,3); cout << "+";
    gotoxy(36,3); cout << "=";

    // saisir les valeurs matrice 1
    for(i=0;i < 3; i++){
        for(j=0;j<3;j++){
            gotoxy(i*4+1, j*2+1); cin >> m1[i][j];
        }
    }
    // saisir les valeurs matrice 2
    for(i=0;i < 3; i++){
        for(j=0;j<3;j++){
            gotoxy(i*4+21, j*2+1); cin >> m2[i][j];
        }
    }
    //afficher resultat
    for(i=0;i < 3; i++){
        for(j=0;j<3;j++){
            gotoxy(i*4+42, j*2+1); cout << (m1[i][j]+m2[i][j]);
        }
    }

    return 0;
}
