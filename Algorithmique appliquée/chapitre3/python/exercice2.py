# -*-coding:utf-8 -*
# Programme exercice 2
# reprise de l'exercice 8 de la séquence 1, mais cette fois avec des fonctions
# date : 10/10/2016


import os
import math


# fonction convertBinaireEntier
# but : convertit un binaire en entier
# entrée : unBinaire (chaîne) reçoit le binaire à convertir
# sortie : entier contenant la conversion
def convertBinaireEntier(unBinaire) :
    """ convertit un binaire en entier """
    nb = 0
    k = 0 
    while len(unBinaire) > 0 :
        # extration du dernier caractère de binaire
        s = unBinaire[len(unBinaire) - 1]
        # conversion du caractère en entier
        result = int(s) ;
        # ajout dans nb du bit récupéré multiplié par la puissance de 2
        nb += result * math.pow(2, k)
        # on enlève le dernier caractère
        unBinaire = unBinaire[:len(unBinaire)-1]
        k += 1
    return int(nb)

# fonction convertEntierBinaire
# but : convertit une nombre entier en binaire
# entrée : unEntier (entier) reçoit le nombre à convertir
# sortie : chaîne contenant la conversion
def convertEntierBinaire(unEntier) :
    """ convertit une nombre entier en binaire """
    binaire = ""
    while unEntier != 0 :
        # récupération du reste et conversion en caractère
        c = str(unEntier%2)
        # concaténation du caractère
        binaire = c + binaire
        unEntier = unEntier // 2 
    return binaire

#-----------------------------------------------------
# Programme principal
#-----------------------------------------------------

# saisie du  premier nombre binaire
binaire = input("Entrez un premier nombre binaire = ")

# conversion en entier du premier nombre
nb1 = convertBinaireEntier(binaire)
print("conversion en base 10 = ", nb1)

# saisie du  second nombre binaire
binaire = input("Entrez un second nombre binaire = ")

# conversion en entier du second nombre
nb2 = convertBinaireEntier(binaire)
print("conversion en base 10 = ", nb2)

# calcul du ET entre les 2
resultat = nb1 & nb2
print("résultat du ET en base 10 = ", resultat)

# conversion du résultat pour l'affichage
print("conversion en binaire = ", convertEntierBinaire(resultat))


os.system("pause")
