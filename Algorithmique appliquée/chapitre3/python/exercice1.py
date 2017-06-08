# -*-coding:utf-8 -*
# Programme exercice 1
# permet de saisie plusieurs valeurs et d'afficher à chaque fois la racine carrée
# date : 3/10/2016

import os
import math


# boucle sur la saisie des valeurs
nb = int(input("Entrez une valeur (0 pour finir) = "))
while nb != 0 :
    # affichage de la racine carrée
    print("racine carr\x82e = ", math.sqrt(nb))
    # saisie d'une nouvelle valeur
    nb = int(input("Entrez une valeur (0 pour finir) = "))


os.system("pause")
