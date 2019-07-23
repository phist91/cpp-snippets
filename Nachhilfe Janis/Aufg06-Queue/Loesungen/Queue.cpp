#include "Queue.h"

template <typename T>
Queue<T>::Queue() : length(0), first(nullptr){}

template <typename T>
Queue<T>::Queue(T firstData) : length(1), first(new Node<T>(firstData)){}

template <typename T>
bool Queue<T>::isEmpty() const{
    return (length == 0);
}

template <typename T>
T Queue<T>::getFirst() const{
    return first->getData();
}

template <typename T>
void Queue<T>::add(const T& pData){
    Node<T>* last = new Node<T>(pData);  // erzeuge neuen Knoten
    if (length == 0)                     // falls Schlange leer..
        first = last;                    // setze neuen Knoten als ersten Knoten
    else{                                // sonst...
        Node<T>* temp = first;           // Zeiger auf aktuellen ersten Knoten setzen
        while (temp->hasNext())          // Zeiger bis Ende laufen lassen
            temp = temp->getNext();
        temp->setNext(last);             // neuen Knoten hinten anhängen
    }
    ++length;
}

template <typename T>
T Queue<T>::remove(){
    Node<T>* oldFirst = first;          // Zeiger auf alten ersten Knoten
    T data = oldFirst->getData();       // Inhalt auslesen
    first = first->getNext();           // zweiten Knoten zum neuen ersten machen
    --length;
    delete oldFirst;                    // ersten Knoten entfernen
    return data;                        // Inhalt zurückgeben
}

template <typename T>
int Queue<T>::getLength() const{
    return length;
}

template <typename T>
Queue<T>::~Queue(){
    while(!isEmpty())
        remove();
}
