# -*-coding:utf-8 -*
# Programme exercice 7
# conversions d'entiers en binaires et vice-versa
# date : 21/09/2016


import os
import math


# boucle sur le menu
choix = "Z"
while choix != "Q" and choix != "q" :

    # afficher le menu
    print("conversion entier vers binaire ........ 1")
    print("conversion binaire vers entier ........ 2")
    print("quitter ............................... Q")
    choix = input("votre choix ........................... ")

    # conversion entier vers binaire
    if choix == "1" :
        binaire = ""
        nb = int(input("entrer un entier = "))
        while nb != 0 :
            # récupération du reste et conversion en caractère
            c = str(nb % 2)
            # concaténation du caractère
            binaire = c + binaire
            nb = nb // 2
        print("conversion en binaire = ", binaire)
    else :

        # conversion binaire vers entier
        if choix == "2" :
            nb = 0
            k = 0 
            binaire = input("entrer un nombre binaire = ")
            while len(binaire) > 0 :
                # extration du dernier caractère de binaire
                s = binaire[len(binaire)-1:]
                # conversion du caractère en entier
                result = int(s)
                # ajout dans nb du bit récupéré multiplié par la puissance de 2
                nb += result * math.pow(2, k)
                # on enlève le dernier caractère
                binaire = binaire[: len(binaire)-1]
                k += 1
            print("conversion en base 10 = ", nb)


os.system("pause")
