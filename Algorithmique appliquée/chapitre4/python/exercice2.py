# -*-coding:utf-8 -*
# Programme exercice 2
# résolution des déplacements des tours de Hanoi pour 4 disques
# date : 14/12/2016

import os


# procedure Hanoi
# but : affiche les déplacements nécessaires pour le problème des tours de Hanoi
# entrée : N (entier) nombre de disques
#          depart, milieu, arrivee : noms des poteaux
def Hanoi(N, depart, milieu, arrivee) :
    if N>=1 :
        Hanoi(N-1, depart, arrivee, milieu) 
        print("déplacer 1 disque de ", depart, " vers ", arrivee)
        Hanoi(N-1, milieu, depart, arrivee) 


# PROGRAMME PRINCIPAL 
Hanoi(4, 'A', 'B', 'C')
    

os.system("pause")
