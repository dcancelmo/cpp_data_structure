//
// Created by Dan Cancelmo on 5/28/19.
//

#ifndef DATA_STRUCTURES_NODE_HPP
#define DATA_STRUCTURES_NODE_HPP

template <typename T>
class Node {
    T data;
    Node<T>* next;

public:
    explicit Node(T newData) {
        data = newData;
        next = nullptr;
    }

    void setData(T newData) {
        data = newData;
    }

    T getData() {
        return data;
    }

    void setNext(Node<T>* newNode) {
        next = newNode;
    }

    Node<T>* getNext() {
        return next;
    }

};

#endif //DATA_STRUCTURES_NODE_HPP
