#ifndef PUNKT_H
#define PUNKT_H
#include <string>

template <typename T>
class Punkt{
private:
    T xpos, ypos;

public:
    Punkt(T pX, T pY);
    Punkt(const Punkt<T>& original);

    double distance() const;
    T getXpos() const;
    T getYpos() const;
    std::string toString() const;

    Punkt<T> operator+(const Punkt<T>& punkt) const;
};
#endif
