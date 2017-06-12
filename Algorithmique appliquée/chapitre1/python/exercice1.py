# -*-coding:utf-8 -*
# Programme exercice 1
# affiche la table de la valeur entrée
# date : 15/09/2016


import os


k = 1

# saisie de la valeur
val = int(input("Entrez un nombre entier = "))

# affichage de la table de multiplication pour cette valeur
while k <= 10 :
    print(val, " * ", k, " = ", (val*k), "\n")
    k += 1


os.system("pause")
