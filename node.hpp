//
// Created by Dan Cancelmo on 5/28/19.
//

#ifndef DATA_STRUCTURES_NODE_HPP
#define DATA_STRUCTURES_NODE_HPP

template <typename T>
class Node {
    T data;
    Node* next;

public:
    explicit Node(T newData) {
        data = newData;
        next = nullptr;
    }

    void setData(T newData) {
        data = newData;
    }

    int getData() {
        return data;
    }

    void setNext(Node* newNode) {
        next = newNode;
    }

    Node* getNext() {
        return next;
    }

};

#endif //DATA_STRUCTURES_NODE_HPP
