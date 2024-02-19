#pragma once
#ifndef NODE_H
#define NODE_H

template <typename T> class Node {
private:
  T data;                   // Data stored in the node
  Node<T> *next, *previous; // Pointers to the next and previous nodes

public:
  // Default constructor
  Node() {
    setNext(nullptr);
    setPrevious(nullptr);
  }

  // Parameterized constructor to initialize the node with data
  Node(T data) {
    setData(data);
    setPrevious(nullptr);
    setNext(nullptr);
  }

  // Setter method to set the data in the node
  void setData(T data) { this->data = data; }

  // Getter method to retrieve the data from the node
  T getData() { return data; }

  // Setter method to set the next node in the sequence
  void setNext(Node<T> *next) { this->next = next; }

  // Getter method to retrieve the next node in the sequence
  Node<T> *getNext() { return next; }

  // Setter method to set the previous node in the sequence
  void setPrevious(Node<T> *previous) { this->previous = previous; }

  // Getter method to retrieve the previous node in the sequence
  Node<T> *getPrevious() { return previous; }
};

#endif
