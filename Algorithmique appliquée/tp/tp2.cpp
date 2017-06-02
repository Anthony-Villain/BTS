/* programme matriceInverse  (exercice 7)
*  but : saisir des valeurs, afficher les facteurs premiers, puis au final
*        afficher une seule fois chaque facteur premier qui est apparu
*        Ceci est la version optimisée
*  date : 30/10/2016
*/

#include <iostream>
#include <myconio.h>
#include <string.h>

#define N 3

using namespace std;


int main(int argc, char *argv[]){

    float mdep[N][N]; //matrice de départ
    float mid[N][N] = {0};
    float mtrans[N][N]; // matrice de transition
    float minv[N][N]; // matrice inversée
    int i,k,j;


    for(k=0;k < N;k++){
        mid[k][k] =1;
    }

    //afficher matrice de départ
    for(k=0;k<N;k++){
        for(j=0;j<N;j++){
            gotoxy(k*10+1,j*2+3); cout << ".";
            gotoxy(k*10+50,j*2+3); cout << ".";
        }
    }

    gotoxy(36,5);cout << "=";

    //saisir matrice
    for(k=0;k<N;k++){
        for(j=0;j<N;j++){
            gotoxy(k*10+1,j*2+3); cin >> mdep[k][j];
        }
    }

    //inversion de la matrice
    memcpy(mtrans,mdep,sizeof mdep);
    memcpy(minv,mid, sizeof mid);
    for(i=0;i < N; i++){
        for(j=0;j < N; j++){
            if(mdep[i][i]== 0){
                cout << "inversion impossible";
                return 0;
            }
            mtrans[i][j] = mdep[i][j] / mdep[i][i];
            mid[i][j] = minv[i][j] /mdep[i][i];
        }
        memcpy(mdep,mtrans, sizeof mtrans);
        memcpy(minv,mid, sizeof mid);
        for(k=0; k<N; k++){
            if(k != i){
                for(j=0;j<N;j++){
                    mtrans[k][j] = mdep[k][j] - mdep[i][j]* mdep[k][i];
                    mid[k][j] = minv[k][j] - minv[i][j] * mdep[k][i];
                }
            }
        }
        memcpy(mdep,mtrans, sizeof mtrans);
        memcpy(minv,mid, sizeof mid);
    }

    //afficher matrice inverse

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            gotoxy(i*10+50,j*2+3); cout << minv[i][j];
        }
    }




    return 0;
}
