#include "DVD.h"
#include <iostream>

// Konstruktoren
DVD::DVD(std::string pTitel, int pLaufzeit, int pAlter) :
    titel(pTitel), laufzeit(pLaufzeit), FskAlter(pAlter) {}

DVD::DVD(const DVD& originalDVD) :
    titel(originalDVD.titel), laufzeit(originalDVD.laufzeit), FskAlter(originalDVD.FskAlter) {}

bool DVD::freiFuerKinder() const{
    return (FskAlter <= 6);
}

bool DVD::istKurzfilm() const{
    return (laufzeit <= 40);
}

// Getter und Setter
void DVD::setFskAlter(int pAlter){
    FskAlter = pAlter;
}

int DVD::getFskAlter() const{
    return FskAlter;
}

void DVD::setTitel(std::string pTitel){
    titel = pTitel;
}

std::string DVD::getTitel() const{
    return titel;
}

void DVD::setLaufzeit(int pLaufzeit){
    laufzeit = pLaufzeit;
}

int DVD::getLaufzeit() const{
    return laufzeit;
}

DVD DVD::operator+(const DVD& dvd) const{
    std::string neuTitel = titel + " und " + dvd.titel;
    int neuLaufzeit = laufzeit + dvd.laufzeit;
    int neuAlter;
    if (FskAlter >= dvd.FskAlter)
        neuAlter = FskAlter;
    else
        neuAlter = dvd.FskAlter;
    return DVD(neuTitel,neuLaufzeit,neuAlter);
}