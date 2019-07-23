#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include "Node.cpp"

template <typename T>
class Queue{
private:
    int length;
    Node<T>* first;

public:
    Queue();
    Queue(T firstData);
    bool isEmpty() const;
    T getFirst() const;
    void add(const T& toAdd);
    T remove();
    int getLength() const;
    ~Queue();
};

#endif
