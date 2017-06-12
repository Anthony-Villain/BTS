# -*-coding:utf-8 -*
# Programme exercice 5
# calcul du produit de puissances de 2
# date : 15/09/2016


import os
import math


produit = 1

# saisie de la puissance maximale
n = int(input("entrez la valeur max = "))

# calcul et affichage de la somme des puissances de 2
for k in range(1, n+1) :
    produit *= math.pow(2, k)
print("Le produit des 2 puissance k = ", produit)


os.system("pause")
