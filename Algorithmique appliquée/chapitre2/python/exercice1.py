# -*-coding:utf-8 -*
# Programme polynome
# saisie d'un polynome et calcul de f(x) en fonction de x
# date : 05/10/2016


import os
import math


# saisie du polynôme obligatoirement <= 6
degre = 7
while degre > 6 :
    degre = int(input("Entrez le degré du polynome (maximum 6) = "))

# déclaration du tableau
a = [0.0]*(degre+1)

# saisie des termes du polynome
for k in range(0, degre+1) :
    a[k] = float(input("a" + str(k) + " = "))

# affichage du polynôme
print("\nf(X) = ", a[0])
for k in range(1, degre+1) :
    print(" + ", a[k], "*X^", k)
print("\n")

# boucle sur la saisie des valeurs de x et le calcul de f(x)
choix = "O"
while choix == "O" or choix == "o" :
    # saisie de x
    x = float(input("X = "))
    # calcul de f(x)
    resultat = 0.0
    for k in range(0, degre+1) :
        resultat += a[k] * math.pow(x, k)
    print("f(X) = ", resultat)
    # demade si l'utilisateur veut continuer
    choix = input("\nVoulez-vous continuer ? (O/N) = ")


os.system("pause")
