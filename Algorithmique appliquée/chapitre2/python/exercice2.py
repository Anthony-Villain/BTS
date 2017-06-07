# -*-coding:utf-8 -*
# Programme exercice 2
# affichage des 50 premiers nombres premiers avec recherche optimisée
# date : 6/10/2016


import os
import math


# déclarations
premier = [0]*50 # tableau qui mémorisera les nombres premiers
max = 1 # max contiendra le nombre de cases remplies dans premier
nb = 3 # variable qui sera à tester

# initialisation de la première case
premier[0] = 2

# boucle sur la recherche des premiers
while max < 50 :
    # test si le nombre contenu dans nb est premier
    k = 0 
    while k<max and math.pow(premier[k], 2)<nb and nb%premier[k]!=0 :
        k += 1
    # si nb est premier, il est mémorisé
    if nb%premier[k]!=0 :
        premier[max] = nb
        max += 1
    # passage au nombre suivant à tester
    nb += 1

# affichage des 50 nombres premiers
for k in range(0, 50) :
    print(premier[k])


os.system("pause")
