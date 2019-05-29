//
// Created by Dan Cancelmo on 5/28/19.
//

#ifndef DATA_STRUCTURES_LINKEDLIST_HPP
#define DATA_STRUCTURES_LINKEDLIST_HPP

#include "node.hpp"

template <typename T>
class LinkedList {
    Node<T>* head;
    int length;
    Node<T>* tail;
public:
    LinkedList() {
        head = tail = nullptr;
        length = 0;
    }

    Node<T>* getFirst() {
        return head;
    }

    void setFirst(Node<T>* newHead) {
        head = newHead;
    }

    Node<T>* getLast() {
        return tail;
    }

    void setLast(Node<T>* newNode) {
        tail->setNext(newNode);
        tail = newNode;
    }

    int getLength() {
        return length;
    }

    bool contains(T data) {
        Node<T>* curr = head;
        for (int i = 0; i < length; i++) {
            if (curr->getData() == data) return true;
            curr = curr->getNext();
        }
    }

    void insert(T newData) {
        if (contains(newData)) {
            std::cout << newData << " is already in the list.\n";
            return;
        }
        Node<T>* node = new Node<T>(newData);
        if (!length) {
            head = tail = node;
        } else {
            setLast(node);
        }
        length++;
    }

    void prepend(T newData) {
        if (contains(newData)) {
            std::cout << newData << " is already in the list.\n";
            return;
        }
        Node<T>* node = new Node<T>(newData);
        if (!length) {
            head = tail = node;
        } else {
            node->setNext(head);
            head = node;
        }
        length++;
    }

    void print() {
        Node<T>* curr = head;
        std::cout << "[" << curr->getData();
        for (int i = 1; i < length; i++) {
            curr = curr->getNext();
            std::cout <<  ", " << curr->getData();
        }
        std::cout << "]\n";
    }

    int removeData(T oldData) {
        Node<T>* curr = head;
        if (curr->getData() == oldData) {
            head = curr->getNext();
            length--;
            return curr->getData();
        }
        for (int i = 1; i < length; i++) {
            Node<T>* prev = curr;
            curr = curr->getNext();
            if (curr->getData() == oldData) {
                prev->setNext(curr->getNext());
                length--;
                return  curr->getData();
            }
        }
    }

    int getAtPosition(int num) {
        Node<T>* curr = head;
        for (int i = 1; i < num; i++) {
            curr = curr->getNext();
        }
        return curr->getData();
    }

    Node<T>* removeFirst() {
        Node<T>* curr = head;
        head = curr->getNext();
        length--;
        return curr;
    }
};

#endif //DATA_STRUCTURES_LINKEDLIST_HPP
