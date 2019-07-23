#include <iostream>
#include "Notenliste.h"

#include <iostream>

std::map<std::string,Note>* alleNoten(const std::vector<Notenliste>& listen, const Schueler& pSchueler){
    std::map<std::string,Note>* result = new std::map<std::string,Note>{};
    for (Notenliste liste : listen)
        if (liste.hatNote(pSchueler))
            (*result)[liste.getName()] = liste.getNote(pSchueler);
    return result;
}

int main()
{
    // lege ein paar Schüler an
    Schueler s1("Kevin", 8);
    Schueler s2("Jana", 9);
    Schueler s3("Franziska", 10);
    Schueler s4("Markus", 8);
    Schueler s5("Stefanie", 9);

    // erstelle Notenliste für Deutsch
    Notenliste nd("Deutsch");
    nd.add(s1,MANGELHAFT);
    nd.add(s2,SEHRGUT);
    nd.add(s3,AUSREICHEND);
    nd.add(s4,GUT);
    nd.add(s5,AUSREICHEND);

    // Ausgabe der Note von Kevin und Durchschnittsnote im Kurs
    std::cout << "Kevins Note in Deutsch: " << nd.getNote(s1) << std::endl << std::endl;

    // Ausgabe der ganzen Notenliste und Durchschnitt:
    nd.ausgabe();
    std::cout << "Anzahl: " << nd.size() << std::endl;
    std::cout << "Durchschnitt: " << nd.durchschnitt() << std::endl << std::endl;

    // Note von Kevin ändern --> Anzahl Noteneinträge bleibt gleich
    nd.add(s1,AUSREICHEND);
    std::cout << nd.size() << std::endl << std::endl;

    // Hole alle Schüler mit Note ausreichend
    std::vector<Schueler>* ausreichend = nd.getSchuelerByNote(AUSREICHEND);
    std::cout << "Alle Schüler mit Note ausreichend:" << std::endl;
    for (Schueler s : *ausreichend)
        std::cout << s.getName() << std::endl;

    // erstelle weitere Notenlisten für Mathe und Englisch
    Notenliste nm("Mathematik");
    nm.add(s1,GUT);
    nm.add(s4,BEFRIEDIGEND);
    nm.add(s5,GUT);

    Notenliste ne("Englisch");
    ne.add(s2,SEHRGUT);
    ne.add(s3,GUT);
    ne.add(s4,GUT);
    ne.add(s5,MANGELHAFT);

    // Packe Notenlisten in einen Vektor
    std::vector<Notenliste> vec{};
    vec.push_back(nd);
    vec.push_back(nm);
    vec.push_back(ne);

    // Hole alle Noten des Schülers s3
    std::map<std::string,Note>* s3noten = alleNoten(vec,s3);
    std::cout << std::endl << "Alle Noten von Franziska:" << std::endl;
    for (std::pair<std::string,Note> eintrag : *s3noten){
        std::cout << eintrag.first << ": " << eintrag.second << std::endl;
    }
}
