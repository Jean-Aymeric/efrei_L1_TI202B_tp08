//
// Created by jeana on 06/04/2024.
//

#include "classEtud.h"


void lireTabEtudiants(ETUDIANT *T, int N) {
    for (int i = 0; i < N; i++) {
        lireEtudiant(&T[i]);
    }
}

void afficherTabEtudiants(ETUDIANT *T, int N) {
    for (int i = 0; i < N; i++) {
        afficherEtudiant(&T[i]);
    }
}

double moyTabEtudiants(ETUDIANT *T, int N) {
    double moy = 0;
    for (int i = 0; i < N; i++) {
        moy += T[i].moyenne;
    }
    return moy / N;
}

int meilleurMoy(ETUDIANT *T, int N) {
    int index = 0;
    for (int i = 1; i < N; i++) {
        if (T[i].moyenne > T[index].moyenne) {
            index = i;
        }
    }
    return index;
}

int plusJeuneEtudiant(ETUDIANT *T, int N) {
    int index = 0;
    for (int i = 1; i < N; i++) {
        if (comparerDates(&T[i].dateNaissance, &T[index].dateNaissance) == -1) {
            index = i;
        }
    }
    return index;
}

void lireClasse(CLASS_ETUD *classe) {
    printf("Entrez le nombre d'etudiants dans la classe\n");
    scanf("%d", &classe->nbEtud);
    classe->etudiants = (ETUDIANT *) malloc(classe->nbEtud * sizeof(ETUDIANT));
    lireTabEtudiants(classe->etudiants, classe->nbEtud);
    classe->moyClasse = moyTabEtudiants(classe->etudiants, classe->nbEtud);

}

void afficherClasse(CLASS_ETUD *classe) {
    for (int i = 0; i < classe->nbEtud; i++) {
        afficherEtudiant(&classe->etudiants[i]);
    }
}

void libClasseEtud(CLASS_ETUD *classe) {
    free(classe->etudiants);
}