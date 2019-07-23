#include "PunktInt.h"
#include <cmath>
PunktInt::PunktInt(int pX, int pY) : xpos(pX), ypos(pY) {}

PunktInt::PunktInt(const PunktInt& original) : PunktInt(original.xpos, original.ypos) {}

double PunktInt::distance() const{
    return sqrt(xpos*xpos + ypos * ypos);
}

int PunktInt::getXpos() const{
    return xpos;
}

int PunktInt::getYpos() const{
    return ypos;
}

std::string PunktInt::toString() const{
    return "(" + std::to_string(xpos) + "," + std::to_string(ypos) + ")";
}

PunktInt PunktInt::operator+(const PunktInt& punkt) const{
    return PunktInt(this->xpos + punkt.xpos, this->ypos + punkt.ypos);
}
