#include <iostream>
#include "linkedlist.hpp"
#include "queue.cpp"
#include "stack.cpp"
#include "stack.hpp"

int main() {
    std::cout << "______ LinkedList ______" << std::endl;
    LinkedList<int> list;
    list.insert(5);
    list.insert(6);
    list.insert(8);
    list.print();

    LinkedList<std::string> strList;
    strList.insert("Hello");
    strList.insert("World");
    strList.insert("Dan");
    strList.print();


    std::cout << "______ Stack ______" << std::endl;
    Stack<int> stack;
    stack.push(22);
    stack.push(22);
    stack.push(6);
    stack.push(47);
    stack.push(8);
    stack.print();
    std::cout << "Pop: " << stack.pop() << std::endl;
    stack.print();

    Stack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    strStack.push("Dan");
    strStack.print();


    std::cout << "______ Queue ______" << std::endl;
    Queue<int> queue;
    queue.enque(22);
    queue.enque(6);
    queue.enque(47);
    queue.enque(8);
    queue.print();
    std::cout << "Deque: " << queue.deque() << std::endl;
    queue.print();

    Queue<std::string> strQueue;
    strQueue.enque("Hello");
    strQueue.enque("World");
    strQueue.enque("Dan");
    strQueue.print();

    return 0;
}