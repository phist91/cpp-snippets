#include <iostream>

void printArray(int* a, int length){
    if (a == nullptr)
        std::cout << "Ungültiges Array übergeben!" << std::endl;
    std::cout << "{ ";
    for (int i = 0; i < length; i++){
        std::cout << a[i] << " ";
    }
    std::cout << "}";
}

bool compareArray(int* a, int* b, int length){
    if (a == nullptr || b == nullptr)
        std::cout << "Ungültiges Array übergeben!" << std::endl;
    for (int i = 0; i < length; i++)
        if (a[i] != b[i])
            return false;
    return true;    
}


/**
 * Aufgabe 2
 * Die Funktion erhält ein Array a und seine Länge und gibt ein gleich langes
 * Array zurück. Dieses enthält im i-ten Eintrag die i-te Partialsumme von a,
 * d.h. a[0] + a[1] + ... + a[i].
 */

int* zip(int* a, int* b, int length){
    if (a == nullptr || b == nullptr)
        std::cout << "Ungültiges Array übergeben!" << std::endl;
    int* result = new int[2*length];
    for (int i = 0; i < length; i++){
        result[2*i] = a[i];
        result[2*i+1] = b[i];
    }
    return result;
}

int count(int* a, int length, int x){
    if (a == nullptr)
        std::cout << "Ungültiges Array übergeben!" << std::endl;
    int result = 0;
    for (int i = 0; i < length; i++)
        if (a[i] == x)
            result++;
    return result;
}

int* filter(int* a, int length, int x){
    int* result = new int[length - count(a,length,x)];
    int j = 0;
    for (int i = 0; i < length; i++)
        if (a[i] != x){
            result[j] = a[i];
            j++;
        }
    return result;
}
