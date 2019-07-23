#include <iostream>
#include "ActionDVD.h"

int main()
{
    // ohne Pointer (statischer Polymorphismus)
    ActionDVD a("Stirb langsam",90,false);
    DVD d = a;

    std::cout << a.getTitel() << std::endl;     // Methode aus ActionDVD
    std::cout << d.getTitel() << std::endl;     // Methode aus DVD

    // mit Pointer (dynamische Polymorphismus)
    ActionDVD* a2 = new ActionDVD("Stirb langsam", 90, false);
    DVD* d2 = a2;

    std::cout << a2->getTitel() << std::endl;   // Methode aus ActionDVD
    std::cout << d2->getTitel() << std::endl;   // Methode aus ActionDVD, wenn DVD-Methode virtual

    ActionDVD& a3 = a;
    DVD& d3 = a3;

    std::cout << a3.getTitel() << std::endl;    // Methode aus ActionDVD
    std::cout << d3.getTitel() << std::endl;    // Methode aus ActionDVD, wenn DVD-Methode virtual
}