#ifndef NOTENLISTE_H
#define NOTENLISTE_H

#include <vector>
#include <map>
#include "Note.h"
#include "Schueler.h"

class Notenliste{
private:
    std::string kursname;
    std::map<Schueler,Note> noten;

public:
    Notenliste(std::string pName);
    void add(const Schueler& pSchueler, Note pNote);
    void remove(const Schueler& pSchueler);
    bool hatNote(const Schueler& pSchueler) const;
    Note getNote(const Schueler& pSchueler) const;
    std::string getName() const;
    void ausgabe() const;
    double durchschnitt() const;
    std::vector<Schueler>* getSchuelerByNote(Note pNote) const;
    int size() const;
};

#endif // NOTENLISTE_H
