#ifndef DVD_H
#define DVD_H

#include <string>

class DVD{
protected:
    std::string titel;
    int laufzeit;
    int FskAlter;

public:
    // Konstruktoren
    DVD(std::string pTitel, int pLaufzeit, int pAlter);
    DVD(const DVD& originalDVD);

    bool freiFuerKinder() const;
    bool istKurzfilm() const;

    // Getter / Setter
    void setTitel(std::string pTitel);
    virtual std::string getTitel() const;
    void setLaufzeit(int pLaufzeit);
    int getLaufzeit() const;
    void setFskAlter(int pAlter);
    int getFskAlter() const;

    DVD operator+(const DVD& dvd) const;
};
#endif // DVD_H
