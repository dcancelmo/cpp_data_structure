//
// Created by Dan Cancelmo on 5/28/19.
//

#ifndef DATA_STRUCTURES_STACK_HPP
#define DATA_STRUCTURES_STACK_HPP

#include "node.hpp"
#include "linkedlist.hpp"

template <typename T>
class Stack {
    LinkedList<T>* list;
public:
    Stack() {
        list = new LinkedList<T>();
    }

    T pop() {
        return list->removeFirst()->getData();
    }

    T peek() {
        return list->getFirst()->getData();
    }

    void push(T num) {
        Node<T>* newNode = new Node<T>(num);
        list->prepend(num);
    }

    int getSize() {
        return list->getLength();
    }

    void print() {
        list->print();
    }
};

#endif //DATA_STRUCTURES_STACK_HPP
