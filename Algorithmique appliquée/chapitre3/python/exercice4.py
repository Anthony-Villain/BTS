# -*-coding:utf-8 -*
# Programme exercice 4
# reprise de l'exercice 6 de la séquence 1 avec une bibliotheque
# date : 24/10/2016

import os
import math
import sys
sys.path.append("..\\bibliotheque")
from maBiblio import *


# saisie du premier nombre à tester
val = int(input("entrez un nombre entier (0 pour finir) : "))

# boucle générale sur les tests
while val != 0 :
    # affichage du message correspondant au nombre
    if premier(val) :
        print(val, " est premier")
    else :
        print(val, " n'est pas premier")

    # saisie d'un nombre à tester
    val = int(input("entrez un nombre entier (0 pour finir) : "))


os.system("pause")
