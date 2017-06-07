# -*-coding:utf-8 -*
# Programme exercice 3
# saisie de 2 matrices et affichage de la matrice somme
# date : 11/10/2016


import os
import sys
sys.path.append("..\\bibliotheque")
import colorama
from colorama.initialise import gotoxy 


# déclarations
m1 = []
m2 = []

# affichage de la structure des matrices à saisir
for i in range(0, 4) :
    for j in range(0, 4) :
        gotoxy(i*4+1, j*2+1)
        print(".")
        gotoxy(i*4+21, j*2+1)
        print(".")       
gotoxy(16, 3)
print("+")
gotoxy(36, 3)
print("=")

# saisie d'une première matrice 4x4
for i in range(0, 4) :
    m1.append([])
    for j in range(0, 4) :
        gotoxy(i*4+1, j*2+1)
        val = int(input())
        m1[i].append(val)

# saisie d'une seconde matrice 4x4
for i in range(0, 4) :
    m2.append([])
    for j in range(0, 4) :
        gotoxy(i*4+21, j*2+1)
        val = int(input())
        m2[i].append(val)

# calcul et affichage de la matrice somme
for i in range(0, 4) :
    for j in range(0, 4) :
        gotoxy(i*4+41, j*2+1)
        print(m1[i][j]+m2[i][j])


os.system("pause")
