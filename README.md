# Écriture en miroir

Alors que vous parcourez de très vieux livres, à la recherche d’indications sur le livre qui vous intéresse en particulier, vous tombez sur un langage que vous ne connaissez pas !
À y regarder de plus près, il s’agit des mêmes mots que ceux que vous utilisez tous les jours, mais tout le texte est écrit "en miroir" : toutes les lettres sont écrites de droite à gauche.
Bien que vous arriviez à déchiffrer les textes présents dans ces livres, cela vous prend beaucoup de temps et vous fatigue beaucoup. Vous décidez d’écrire un programme pour remettre automatiquement dans l’ordre les textes.

## CONSTRAINTS
Chaque ligne de texte contient moins de 1000 caractères.

### INPUT
Sur la première ligne, un entier nbLignes, le nombre de lignes du texte.
Les nbLignes suivantes contiennent chacune une ligne de texte qu’il faut inverser.

### OUTPUT
Pour chaque ligne du texte original, vous devez l’afficher de manière inversée.

### EXAMPLE

input:
2
tniop a ritrap tuaf li riruoc ed tres en neiR
egangiomet nu tnos ne eutroT al te erveiL eL

output:
Rien ne sert de courir il faut partir a point
Le Lievre et la Tortue en sont un temoignage

## Explication du Code

#### Lecture du Nombre de Lignes :
scanf("%d", &nbLignes);
getchar();  // Consomme le '\n' restant
On lit le nombre de lignes et on consomme le caractère de nouvelle ligne laissé par scanf.

#### Lecture des Lignes de Texte :
for (int i = 0; i < nbLignes; i++) {
    fgets(texte[i], sizeof(texte[i]), stdin);
    texte[i][strcspn(texte[i], "\n")] = '\0';  // Enlever le '\n' à la fin de chaque ligne
}
Utilisation de fgets pour lire chaque ligne de texte.
Utilisation de strcspn pour trouver le caractère de nouvelle ligne et le remplacer par le caractère nul ('\0').

#### Inversion et Affichage des Lignes :
for (int i = 0; i < nbLignes; i++) {
    int longueur = strlen(texte[i]);
    for (int j = longueur - 1; j >= 0; j--) {
        putchar(texte[i][j]);
    }
    putchar('\n');
}
Pour chaque ligne, on calcule sa longueur avec strlen.
On utilise une boucle pour parcourir la ligne de la fin au début et afficher chaque caractère.
On ajoute un caractère de nouvelle ligne ('\n') à la fin de chaque ligne inversée.