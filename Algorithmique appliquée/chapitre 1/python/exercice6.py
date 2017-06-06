# -*-coding:utf-8 -*
# Programme exercice 6
# contrôle si un nombre est premier ou non
# date : 21/09/2016


import os


# saisie du premier nombre à tester
val = int(input("entrez un nombre entier (0 pour finir) : "))

# boucle générale sur les tests
while val != 0 :
    # boucle sur la recherche d'un diviseur
    diviseur = 2
    premier = True
    while premier and diviseur*diviseur <= val :
        if val % diviseur == 0 :
            premier = False
        diviseur += 1

    # affichage du message correspondant au nombre
    if premier :
        print(val, " est premier")
    else :
        print(val, " n'est pas premier")

    # saisie d'un nombre à tester
    val = int(input("entrez un nombre entier (0 pour finir) : "))


os.system("pause")
