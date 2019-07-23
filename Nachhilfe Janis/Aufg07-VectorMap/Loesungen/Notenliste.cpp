#include "Notenliste.h"
#include <iostream>

Notenliste::Notenliste(std::string pName) :
    kursname(pName), noten(std::map<Schueler,Note>{} ) {}

void Notenliste::add(const Schueler& pSchueler, Note pNote){
    noten[pSchueler] = pNote;
}

void Notenliste::remove(const Schueler& pSchueler){
    noten.erase(pSchueler);
}

bool Notenliste::hatNote(const Schueler& pSchueler) const {
    return (noten.count(pSchueler) == 1);
}

Note Notenliste::getNote(const Schueler& pSchueler) const {
    return noten.at(pSchueler);
}

std::string Notenliste::getName() const{
    return kursname;
}

void Notenliste::ausgabe() const{
    for (std::pair<Schueler,Note> eintrag : noten)
        std::cout << eintrag.first.getName() << ": " << eintrag.second << std::endl;
}

int Notenliste::size() const {
    return noten.size();
}

double Notenliste::durchschnitt() const{
    double summe = 0;
    for (std::pair<Schueler,Note> eintrag : noten)
        summe = summe + eintrag.second;
    return summe/noten.size();
}

std::vector<Schueler>* Notenliste::getSchuelerByNote(Note pNote) const{
    std::vector<Schueler>* result = new std::vector<Schueler>();
    for (std::pair<Schueler,Note> eintrag : noten){
        if (eintrag.second == pNote)
            result->push_back(eintrag.first);
    }
    return result;
}
