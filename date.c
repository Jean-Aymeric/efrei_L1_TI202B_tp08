//
// Created by jeana on 06/04/2024.
//

#include "date.h"

void lireDate(DATE *date) {
    printf("Entrez une date au format jj/mm/aaaaa\n");
    scanf("%d/%d/%d", &date->jour, &date->mois, &date->annee);
}

void afficherDate(DATE *date) {
    printf("%d/%d/%d", date->jour, date->mois, date->annee);
}

int comparerDates(DATE *date1, DATE *date2) {
    if (date1->annee > date2->annee) {
        return 1;
    } else if (date1->annee < date2->annee) {
        return -1;
    } else {
        if (date1->mois > date2->mois) {
            return 1;
        } else if (date1->mois < date2->mois) {
            return -1;
        } else {
            if (date1->jour > date2->jour) {
                return 1;
            } else if (date1->jour < date2->jour) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}