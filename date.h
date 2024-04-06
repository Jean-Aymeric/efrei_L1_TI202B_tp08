//
// Created by jeana on 06/04/2024.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef EFREI_L1_TI202B_TP08_DATE_H
#define EFREI_L1_TI202B_TP08_DATE_H

typedef struct {
    int jour;
    int mois;
    int annee;
} DATE;

void lireDate(DATE *date);

void afficherDate(DATE *date);

int comparerDates(DATE *date1, DATE *date2);

#endif //EFREI_L1_TI202B_TP08_DATE_H
