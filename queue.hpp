//
// Created by Dan Cancelmo on 5/28/19.
//

#ifndef DATA_STRUCTURES_QUEUE_HPP
#define DATA_STRUCTURES_QUEUE_HPP

#include "linkedlist.hpp"

template <typename T>
class Queue {
    LinkedList<T>* list;
public:
    Queue() {
        list = new LinkedList<T>();
    }

    void enque(T num) {
        list->insert(num);
    }

    T deque() {
        return list->removeFirst()->getData();
    }

    T peek() {
        return list->getFirst()->getData();
    }

    int getDepth() {
        return list->getLength();
    }

    void print() {
        list->print();
    }

};

#endif //DATA_STRUCTURES_QUEUE_HPP
