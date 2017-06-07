/* programme facteursPremiers (exercice 6)
*  but : saisir des valeurs, afficher les facteurs premiers, puis au final
*        afficher une seule fois chaque facteur premier qui est apparu
*        Ceci est la version non optimisée
*  date : 22/10/2011
*/
#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
    unsigned int m[99][49];
    unsigned int i,j,x,y; //indices de parcours de la matrice
    unsigned int valeur,diviseur; //valeur à diviser et diviseur
    unsigned int maxL,maxC; //nombre de lignes et colonnes remplies dans m
    bool present; //mémorisation si le facteur a déjà été affiché

    //initialisation de la matrice à 0
    for(i=0;i < 99; i++){
        for (j=0;j<49;j++){
            m[i][j] = 0;
        }
    }
    maxL=0;

    //boucle sur la saisie des valeurs
    cout << "entrer une valeur (0 pour finir) =";
    cin >> valeur;
    while(valeur !=0){
        maxC =0;
        diviseur =2;
        while(diviseur <= valeur){
            if(valeur%diviseur == 0){
                m[maxL][maxC] = diviseur;
                maxC+=1;
                valeur /= diviseur;
            }else{
            diviseur +=1;
            }
        }
        cout << "facteurs premiers =";
        j =0;
        while(m[maxL][j] != 0){
            cout << m[maxL][j]<< " ";
            j+=1;
        }
        maxL +=1;
        cout << "entrer une valeur (0 pour finir)=";
        cin >> valeur;
    }

    cout << "tous les facteurs premiers =";
    for(i=0;i < maxL-1;i++){
        j = 0;
        // m étant rempli de 0, on s'arrête dès qu'on tombe en colonne sur un 0
        while(m[i][j] != 0){
            // on cherche si dans les lignes précédentes il était déjà présent
            present = false;
            x=0;
            while(x<i && !present){
                y =0;
                while(m[x][y] != 0 && !present){
                    if(m[x][y] == m[i][j]){
                        present = true;
                    }
                    y+=1;
                }
                x+=1;
            }
            //on cherche aussi si au début de la ligne il n'était pas présent
            y=0;
            while(y <j && !present){
                if(m[i][y] == m[i][j]){
                    present = true;
                }
                y+=1;
            }
            //si n'était pas présent on l'affiche
            if(!present){
                cout << m[i][j] << " ";
            }
            j+=1;
        }
    }

    return 0;
}
