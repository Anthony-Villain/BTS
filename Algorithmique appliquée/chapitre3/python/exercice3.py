# -*-coding:utf-8 -*
# Programme exercice 3
# reprise de l'exercice 6 de la séquence 1 avec une fonction
# date : 17/10/2016


import os
import math


# fonction premier
# but : contrôle si un entier naturel est premier
# entrée : unEntier (entier naturel) contient le nombre à contrôler
# sortie : booléen (vrai si le nombre est premier)
def premier(unEntier) :
    """ contrôle si un entier naturel est premier """
    # boucle sur la recherche d'un diviseur
    diviseur = 2
    p = True # mémorise si le nombre est premier ou non
    while p and diviseur*diviseur<=unEntier :
        if unEntier % diviseur == 0 :
            p = False
        diviseur += 1
    return p 

#-----------------------------------------------------
# Programme principal
#-----------------------------------------------------

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
