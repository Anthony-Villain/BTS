# -*-coding:utf-8 -*
# Programme exercice 3
# somme de nombres entre 2 bornes
# date : 15/09/2016


import os


somme = 0

# saisie des bornes
min = int(input("entrez la valeur min = "))
max = int(input("entrez la valeur max = "))

# calcul et affichage de la somme
for k in range(min, max+1) :
    somme += k
print("La somme des valeurs est = ", somme)


os.system("pause")
