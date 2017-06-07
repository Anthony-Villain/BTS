# -*-coding:utf-8 -*
# Programme facteursPremiers (exercice 5)
# Saisir des valeurs, afficher les facteurs premiers, puis au final
# afficher une seule fois chaque facteur premier qui est apparu
# date : 22/10/2016


import os


# déclarations
m = []
maxL = 0 # nbre de lignes remplies dans m

# boucle sur la saisie des valeurs
valeur = int(input("entrer une valeur (0 pour finir) = "))
while valeur != 0 :
    # recherche des facteurs premiers
    m.append([]) # création d'une nouvelle case avec une liste vide
    diviseur = 2
    while diviseur <= valeur :
        # si on trouve un facteur premier
        if valeur % diviseur == 0 :
            m[maxL].append(diviseur)
            valeur = valeur // diviseur
        else :
            diviseur += 1

    # afichage des facteurs premiers de la valeur saisie
    print("facteurs premiers = ")
    for j in range(0, len(m[maxL])) :
        print(m[maxL][j])
    # saisie d'une nouvelle valeur
    maxL += 1
    # saisie d'une nouvelle valeur
    valeur = int(input("entrer une valeur (0 pour finir) = "))

# affichage une seule fois de chaque facteur premier
print("Tous les facteurs premiers = ")
for i in range(0, maxL) :
    # boucle sur une case e la liste (qui est aussi une liste)
    for j in range(0, len(m[i])) :
        # on cherche si dans les lignes précédentes il était déjà présent
        present = False
        x = 0
        while x < i and not present :
            y = 0
            while y<len(m[x]) and not present :
                if m[x][y] == m[i][j] :
                    present = True
                y += 1
            x += 1
        # on cherche aussi si au début de la ligne il n'était pas présent
        y = 0 
        while y < j and not present :
            if m[i][y] == m[i][j] :
                present = True
            y += 1
        # s'il n'était présent nulle part, on l'affiche
        if not present :
            print(m[i][j])
    

os.system("pause")
