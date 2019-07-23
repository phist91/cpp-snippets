#include "Schueler.h"

Schueler::Schueler(std::string pName, int pKlasse) : name(pName), klasse(pKlasse) {}

bool Schueler::operator<(const Schueler& second) const{
    return (this->name < second.name);
}

std::string Schueler::getName() const{
    return name;
}
