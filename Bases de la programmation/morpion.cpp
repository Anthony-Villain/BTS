//jeu du morpion

#include <myconio.h>


int main() {

	// déclarations et initialisations
	int essais = 0 ;       //compteur d'essais
	int grille[3][3] ;     //matrice pour stocker les coups joués
	int joueur = 1 ;       //1 pour la premier joueur, 2 pour le second
	int l, c ;             //numéro de ligne et de colonne
	int j, k ;             //indices de parcours de matrice
	bool gagne = false ;

	// initialisation de la grille
	for (j=0; j<=2; j++)
		for (k=0; k<=2; k++)
			grille[j][k] = 10
		;
	;

	// affichage de la grille vide
	system("cls");
	gotoxy(10, 5)  ; printf(" ----------- ") ;
	gotoxy(10, 6)  ; printf("|   |   |   |") ;
	gotoxy(10, 7)  ; printf(" ----------- ") ;
	gotoxy(10, 8)  ; printf("|   |   |   |") ;
	gotoxy(10, 9)  ; printf(" ----------- ") ;
	gotoxy(10, 10) ; printf("|   |   |   |") ;
	gotoxy(10, 11) ; printf(" ----------- ") ;

	// le jeu
	while (!gagne && essais<9) {

		// saisie de la position et contrôle de saisie
		gotoxy(1, 15) ; printf("C'est au tour du joueur %d : ",joueur) ;
		do {
			gotoxy(10, 16) ; printf("ligne   =    ") ;
			gotoxy(10, 17) ; printf("Colonne =    ") ;
			gotoxy(20, 16) ; scanf("%d",&l) ;
			gotoxy(20, 17) ; scanf("%d",&c) ;
		}while (l<1 || l>3 || c<1 || c>3 || grille[l-1][c-1] < 3) ;

      // sauvegarde du nouveau coup joué
      grille[l-1][c-1] = joueur ;

		// affichage du nouveau symbole dans la grille
		gotoxy(12+(c-1)*4, 6+(l-1)*2) ;
		if (joueur == 1) {
			printf("X") ;
		}else{
			printf("O") ;
		}

		// vérification de la ligne
		if (grille[l-1][0]+grille[l-1][1]+grille[l-1][2]==3*joueur ||
			grille[0][c-1]+grille[1][c-1]+grille[2][c-1]==3*joueur ||
			grille[0][0]+grille[1][1]+grille[2][2]==3*joueur ||
			grille[0][2]+grille[1][1]+grille[2][0]==3*joueur)
			 gagne = true
		;

		// compteur d'essais et changement de joueur
		essais++ ;
		if (!gagne) {
			if (joueur == 1) {
				joueur = 2 ;
			}else{
				joueur = 1 ;
			}
		}

	}

	
	gotoxy(1, 20) ;
	if (gagne) {
		printf("le joueur %d a gagn\x82 !", joueur) ;
	}else{
		printf("Egalité") ;
	}

	getch() ;
	return 0 ;

}
