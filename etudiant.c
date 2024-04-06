//
// Created by jeana on 06/04/2024.
//

#include "etudiant.h"

void lireEtudiant(ETUDIANT *etudiant) {
    printf("Entrez le nom de l'etudiant\n");
    scanf("%s", etudiant->nom);
    printf("Entrez le prenom de l'etudiant\n");
    scanf("%s", etudiant->prenom);
    printf("Entrez la date de naissance de l'etudiant\n");
    lireDate(&etudiant->dateNaissance);
    printf("Entrez le numero de l'etudiant\n");
    scanf("%ld", &etudiant->numEtud);
    printf("Entrez la moyenne de l'etudiant\n");
    scanf("%lf", &etudiant->moyenne);
}

void afficherEtudiant(ETUDIANT *etudiant) {
    printf("Nom: %s\n", etudiant->nom);
    printf("Prenom: %s\n", etudiant->prenom);
    printf("Date de naissance: ");
    afficherDate(&etudiant->dateNaissance);
    printf("\nNumero etudiant: %ld\n", etudiant->numEtud);
    printf("Moyenne: %lf\n", etudiant->moyenne);
}