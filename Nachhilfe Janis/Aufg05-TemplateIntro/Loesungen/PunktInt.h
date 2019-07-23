#ifndef PUNKTINT_H
#define PUNKTINT_H
#include <string>

class PunktInt{
private:
    int xpos, ypos;

public:
    PunktInt(int pX, int pY);
    PunktInt(const PunktInt& original);

    double distance() const;
    int getXpos() const;
    int getYpos() const;
    std::string toString() const;

    PunktInt operator+(const PunktInt& punkt) const;
};
#endif

