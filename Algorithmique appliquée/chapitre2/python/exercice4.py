# -*-coding:utf-8 -*
# Programme exercice 4
# permet d'afficher des distances entre villes
# date : 17/10/2016


import os
import sys
sys.path.append("..\\bibliotheque")
import colorama
from colorama.initialise import gotoxy 


# déclarations
ville = ["Paris", "Lyon", "Marseille", "Bordeaux", "Nice"]
dist = [[0, 400, 800, 700, 1000], [0, 0, 400, 500, 600], [0, 0, 0, 650, 200], [0, 0, 0, 0, 850], [0, 0, 0, 0, 0]]

# affichage des villes en têtes de colonnes
for j in range(0, 5) :
    gotoxy((j+1)*12, 1)
    print(ville[j])
# affichage de la matrice triangulaire des distances
for i in range(0, 5) :
    # affichage de la ville en tête de ligne
    gotoxy(1, i*2+3)
    print(ville[i])
    # boucle sur les distances par rapport à cette ville
    for j in range(0, i) :
        gotoxy((j+1)*12, i*2+3)
        print(dist[j][i])


os.system("pause")
