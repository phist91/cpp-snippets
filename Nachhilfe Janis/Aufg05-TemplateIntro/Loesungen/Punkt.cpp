#include "Punkt.h"
#include <cmath>

template <typename T>
Punkt<T>::Punkt(T pX, T pY) : xpos(pX), ypos(pY) {}

template <typename T>
Punkt<T>::Punkt(const Punkt& original) : Punkt(original.xpos, original.ypos) {}

template <typename T>
double Punkt<T>::distance() const{
    return sqrt(xpos*xpos + ypos * ypos);
}

template <typename T>
T Punkt<T>::getXpos() const{
    return xpos;
}

template <typename T>
T Punkt<T>::getYpos() const{
    return ypos;
}

template <typename T>
std::string Punkt<T>::toString() const{
    return "(" + std::to_string(xpos) + "," + std::to_string(ypos) + ")";
}

template <typename T>
Punkt<T> Punkt<T>::operator+(const Punkt& punkt) const{
    return Punkt(this->xpos + punkt.xpos, this->ypos + punkt.ypos);
}
