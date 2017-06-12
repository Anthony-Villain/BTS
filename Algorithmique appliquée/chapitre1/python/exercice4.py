# -*-coding:utf-8 -*
# Programme exercice 4
# calcul de la somme de puissances de 2
# date : 15/09/2016

import os
import math


somme = 0

# saisie de la puissance maximale
n = int(input("entrez la valeur max = "))

# calcul et affichage de la somme des puissances de 2
for k in range(1, n+1) :
    somme += math.pow(2, k)
print("La somme des 2 puissance k = ", somme)


os.system("pause")
