# -*-coding:utf-8 -*
# Programme exercice 6
# différents traitements sur des nombres
# date : 31/10/2017


import os
import math
import sys
sys.path.append("..\\bibliotheque")
from maBiblio import *


# boucle sur le menu
choix = 'Z'
while choix != 'Q' and choix != 'q' :
    # afficher le menu
    print("50 premiers multiples d'un nombre ........ 1")
    print("facteurs premiers d'un nombre ............ 2")
    print("50 premiers nombres premiers ............. 3")
    print("quitter .................................. Q")
    choix = input("votre choix .............................. ")

    # 50 premiers multiples d'un nombre
    if choix == '1' :
        nb = int(input("Entrez un nombre = "))
        multiples(nb, 50)
    else :
        # facteurs premiers d'un nombre
        if choix == '2' :
            nb = int(input("Entrez un nombre = "))
            facteursPremiers(nb)
        else :
            # 50 premiers nombres premiers
            if choix == '3' :
                nombresPremiers(50)


os.system("pause")
