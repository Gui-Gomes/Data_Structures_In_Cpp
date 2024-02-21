#pragma once
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "Node.h"
#include <stdexcept>

// Declaration of a template class for a singly linked list
template <typename T> class List {
private:
  Node<T> *head; // Pointer to the head of the linked list
  int listSize;  // Variable to store the size of the linked list

  // Private helper functions for internal use

  // Set the head of the list
  void setHead(Node<T> *head) { this->head = head; }

  // Get the head of the list
  Node<T> *getHead() { return head; }

  // Increment the size of the list
  void incrementList() { listSize++; }

  // Decrement the size of the list
  void decrementList() { listSize--; }

  // Get the last index of the list
  int getLastIndexOfTheList() { return size() - 1; }

  // Check if a given position is valid in the list
  bool isValidPosition(int position) {
    return position <= getLastIndexOfTheList() && position >= 0;
  }

  // Get the node at a specific position in the list
  Node<T> *getNodeAtPosition(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position!");

    Node<T> *temp = getHead();

    for (int i = 0; i < position; i++)
      temp = temp->getNext();

    return temp;
  }

public:
  // Constructor to initialize an empty list
  List() {
    setHead(nullptr);
    listSize = 0;
  }

  // Get the size of the list
  int size() { return listSize; }

  // Check if the list is empty
  bool isEmpty() { return size() == 0; }

  // Add a new element at a specified position in the list
  void add(T data, int position) {
    if (position < 0 || position > size())
      throw std::out_of_range("Invalid position!");

    Node<T> *newNode = new Node<T>(data);

    if (isEmpty()) {
      setHead(newNode);
    } else if (position == 0) {
      newNode->setNext(getHead());
      setHead(newNode);
    } else if (position == size()) {
      Node<T> *temp = getNodeAtPosition(getLastIndexOfTheList());
      temp->setNext(newNode);
    } else {
      Node<T> *temp1 = getNodeAtPosition(position - 1);
      Node<T> *temp2 = getNodeAtPosition(position);
      temp1->setNext(newNode);
      newNode->setNext(temp2);
    }

    incrementList();
  }

  // Add a new element at the end of the list
  void add(T data) { add(data, size()); }

  // Remove an element at a specified position in the list
  void remove(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position!");

    Node<T> *temp = nullptr;

    if (size() == 1) {
      setHead(nullptr);
    } else if (position == 0) {
      temp = getHead();
      setHead(getHead()->getNext());
    } else if (position < getLastIndexOfTheList()) {
      temp = getNodeAtPosition(position);
      getNodeAtPosition(position - 1)->setNext(getNodeAtPosition(position + 1));
    } else {
      temp = getNodeAtPosition(position);
    }

    delete temp;

    decrementList();
  }

  // Remove the last element in the list
  void remove() { remove(getLastIndexOfTheList()); }

  // Get the element at a specified position in the list
  T get(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position!");

    return getNodeAtPosition(position)->getData();
  }

  // Print the entire list using a provided print function
  void printList(void (*printFunction)(T)) {
    for (int i = 0; i < size(); i++)
      printFunction(get(i));
  }

  // Print the element at a specified position using a provided print function
  void printNode(void (*printFunction)(T), int position) {
    printFunction(get(position));
  }

  // Swap the elements at two specified positions in the list
  void switchNodes(int position1, int position2) {
    if (isEmpty() || !isValidPosition(position1) ||
        !isValidPosition(position2)) {
      throw std::out_of_range("Invalid position!");
    } else if (position1 == position2) {
      return;
    }

    Node<T> *node1 = getNodeAtPosition(position1);
    Node<T> *node2 = getNodeAtPosition(position2);

    T data = node1->getData();
    node1->setData(node2->getData());
    node2->setData(data);
  }

  // Destructor to free memory occupied by the list
  ~List() {
    while (!isEmpty()) {
      remove();
    }
  }
};

#endif
