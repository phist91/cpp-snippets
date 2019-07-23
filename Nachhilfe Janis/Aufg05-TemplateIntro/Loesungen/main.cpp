#include <iostream>
#include <string>
#include "Punkt.h"
#include "Punkt.cpp" // notwendig bei Templates!

int main()
{
    Punkt<int> p1(5,2);
    Punkt<int> q1(11,-4);
    Punkt<int> r1 = p1 + q1;
    std::cout << r1.toString() << std::endl;
    
    Punkt<std::string> p2("Hallo ","Wie ");
    Punkt<std::string> q2("Welt!","gehts?");
    Punkt<std::string> r2 = p2 + q2;
    std::cout << ("(" + r2.getXpos() + "," + r2.getYpos() + ")") << std::endl;
    
    std::cout << r1.distance() << std::endl;
    // Geht nicht, da distance-Definition für std::string nicht kompatibel:
    // r2.distance();
}