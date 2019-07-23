#include <iostream>
#include "DVD.h"

int main(){
    DVD dvd1("Stirb langsam", 84, 12);
    DVD dvd2("Mission Impossible", 90, 16);
    DVD dvd3 = dvd1 + dvd2;

    std::cout << dvd3.getTitel() << ", " << dvd3.getLaufzeit() << " Minuten, ab " << dvd3.getFskAlter() << " Jahren" << std::endl;
}