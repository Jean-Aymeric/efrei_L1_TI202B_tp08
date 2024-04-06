//
// Created by jeana on 06/04/2024.
//
#include "etudiant.h"

#ifndef EFREI_L1_TI202B_TP08_CLASSETUD_H
#define EFREI_L1_TI202B_TP08_CLASSETUD_H

typedef struct {
    ETUDIANT *etudiants;
    int nbEtud;
    double moyClasse;
} CLASS_ETUD;

void lireTabEtudiants(ETUDIANT *T, int N);

void afficherTabEtudiants(ETUDIANT *T, int N);

double moyTabEtudiants(ETUDIANT *T, int N);

int meilleurMoy(ETUDIANT *T, int N);

int plusJeuneEtudiant(ETUDIANT *T, int N);

void lireClasse(CLASS_ETUD *);

void afficherClasse(CLASS_ETUD *);

void libClasseEtud(CLASS_ETUD *);

#endif //EFREI_L1_TI202B_TP08_CLASSETUD_H
