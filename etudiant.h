//
// Created by jeana on 06/04/2024.
//
#include "date.h"

#ifndef EFREI_L1_TI202B_TP08_ETUDIANT_H
#define EFREI_L1_TI202B_TP08_ETUDIANT_H

typedef struct {
    char nom[30];
    char prenom[30];
    DATE dateNaissance;
    long numEtud;
    double moyenne;
} ETUDIANT;

void lireEtudiant(ETUDIANT *etudiant);

void afficherEtudiant(ETUDIANT *etudiant);

#endif //EFREI_L1_TI202B_TP08_ETUDIANT_H
