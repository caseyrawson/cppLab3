#include "Node.h"

//making constructor
Node::Node(int data, Node* next) {
    this->data = data; 
    this->next = next;
}

//deep copy constructor
Node::Node(const Node& point) {
    this->data = data; 
    this->next = next;
    if (point.next) {
        next = new Node(*point.next); //if next, call function again
    }
}

//making destructor
Node::~Node() {
    delete next;
}
