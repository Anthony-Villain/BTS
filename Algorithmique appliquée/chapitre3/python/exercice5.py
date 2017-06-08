# -*-coding:utf-8 -*
# Programme exercice 5
# reprise de l'exercice 2 de la séquence 2, en incluaant la bibliothèque maBiblio
# date : 25/10/2016


import os
import math
import sys
sys.path.append("..\\bibliotheque")
from maBiblio import *


# déclarations
p = [0]*50 # tableau qui mémorisera les nombres premiers
max = 1 # max contiendra le nombre de cases remplies dans premier
nb = 3 # variable qui sera à tester

# initialisation de la première case
p[0] = 2

# boucle sur la recherche des premiers
while max < 50 :
    # si nb est premier, il est mémorisé
    if premier(nb) :
        p[max] = nb
        max += 1
    # passage au nombre suivant à tester
    nb += 1

# affichage des 50 nombres premiers
for k in range(0, 50) :
    print(p[k])


os.system("pause")
