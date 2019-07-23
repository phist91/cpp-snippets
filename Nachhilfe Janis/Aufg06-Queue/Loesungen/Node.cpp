#include "Node.h"

template <typename T>
Node<T>::Node (T pData) : data(pData), next(nullptr){}

template <typename T>
T Node<T>::getData() const{
    return data;
}

template <typename T>
void Node<T>::setData(T pData){
    data = pData;
}

template <typename T>
Node<T>* Node<T>::getNext() const{
    return next;
}

template <typename T>
void Node<T>::setNext(Node<T>* pNext){
    next = pNext;
}

template <typename T>
bool Node<T>::hasNext() const{
    return (next != nullptr);
}

