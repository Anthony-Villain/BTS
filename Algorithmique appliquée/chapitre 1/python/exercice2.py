# -*-coding:utf-8 -*
# Programme exercice 2
# affiche la table de 1 à 9 de la valeur entrée
# date : 15/09/2016


import os


k = 1

# saisie de la valeur avec contrôle de saisie
val = 0
while val < 1 or val > 9 :
    val = int(input("Entrez un nombre entier = "))

# affichage de la table de multiplication pour cette valeur
for k in range(1, 11) :
    print(val, " * ", k, " = ", (val*k), "\n")


os.system("pause")
