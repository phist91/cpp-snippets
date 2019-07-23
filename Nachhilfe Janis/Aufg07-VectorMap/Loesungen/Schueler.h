#ifndef SCHUELER_H
#define SCHUELER_H

#include <string>

class Schueler{
private:
    std::string name;
    int klasse;

public:
    Schueler(std::string pName, int pKlasse);
    bool operator< (const Schueler& second) const;
    std::string getName() const;
};

#endif // SCHUELER_H
