#ifndef NODE_H
#define NODE_H

template <typename T>
class Node{
private:
    T data;
    Node<T>* next;

public:
    Node(T pData);
    T getData() const;
    void setData(T pData);
    Node<T>* getNext() const;
    void setNext(Node<T>* pNext);
    bool hasNext() const;
};
#endif // NODE_H
