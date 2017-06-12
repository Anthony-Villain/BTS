# -*-coding:utf-8 -*
# Programme exercice 1
# saisir des entiers naturels et afficher leurs factorielles
# date : 12/12/2016

import os
import sys
sys.path.append("..\\bibliotheque")
from maBiblio import *


nb = int(input("Entrez un nombre (0 pour finir) = "))
while nb != 0 :
    print("factorielle = ", factorielle(nb))
    nb = int(input("Entrez un nombre (0 pour finir) = "))
    

os.system("pause")
