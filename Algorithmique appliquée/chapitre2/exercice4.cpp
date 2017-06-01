/* programme villes (exercice 4)
*  but : permet d'afficher des distances entre villes
*  date : 17/10/2011
*/
#include <iostream>
#include <myconio.h>

using namespace std;



int main(int argc, char *argv[]){

    string ville[5]= {"Paris","Lyon","Marseille","Bordeaux","Nice"};
    int dist[5][5] = {0, 400, 800, 700, 1000, 0, 0, 400, 500, 600, 0, 0, 0, 650, 200, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0} ;


    // affichage horizontal des villes

    for(int i=0;i <5;i++){
        gotoxy((i+1)*12,1);cout << ville[i];
    }


    for (int i=0 ; i<5 ; i++) {
        // affichage vertical des villes
        gotoxy(1, i*2+3) ;cout << ville[i] ;
        // boucle sur les distances par rapport à cette ville
        for (int j=0 ; j<i ; j++) {
            gotoxy((j+1)*12, i*2+3) ; cout << dist[j][i] ;
        }
    }

    return 0;
}
