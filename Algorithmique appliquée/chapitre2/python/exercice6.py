# -*-coding:utf-8 -*
# Programme exercice 6
# Saisir des valeurs, afficher les facteurs premiers, puis au final
# afficher une seule fois chaque facteur premier qui est apparu
# Ceci est la version optimisée
# date : 26/10/2016


import os


# déclarations
facteur = [0]*100
max = 0 # nbre de cases remplies dans facteur

# boucle sur la saisie des valeurs
valeur = int(input("entrer une valeur (0 pour finir) = "))
while valeur != 0 :
    # recherche des facteurs premiers
    diviseur = 2
    while diviseur <= valeur :
        # si on trouve un facteur premier
        if valeur % diviseur == 0 :
            # on l'affiche
            print(diviseur, " ")
            # on regarde s'il a déjà été mémorisé
            k = 0
            while k < max and facteur[k] != diviseur :
                k += 1
            if k == max :
                facteur[max] = diviseur
                max += 1
            # on divise la valeur pour éviter les facteurs non premiers
            valeur /= diviseur
        else :
            diviseur += 1

    # saisie d'une nouvelle valeur
    valeur = int(input("entrer une valeur (0 pour finir) = "))

# affichage une seule fois de chaque facteur premier
print("Tous les facteurs premiers = ")
for k in range(0, max) :
    print(facteur[k])


os.system("pause")
