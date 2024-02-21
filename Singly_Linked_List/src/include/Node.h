#pragma once
#ifndef NODE_H
#define NODE_H

template <typename T> class Node {
private:
  T data;        // Data stored in the node
  Node<T> *next; // Pointer to the next node

public:
  // Default constructor
  Node() {
    setNext(nullptr); // Initialize next pointer to null
  }

  // Constructor with data initialization
  Node(T data) {
    setData(data);    // Set the data
    setNext(nullptr); // Initialize next pointer to null
  }

  // Setter for node data
  void setData(T data) { this->data = data; }

  // Getter for node data
  T getData() { return data; }

  // Setter for the next pointer
  void setNext(Node<T> *next) { this->next = next; }

  // Getter for the next pointer
  Node<T> *getNext() { return next; }
};

#endif
