#pragma once
#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"
#include <stdexcept>

template <typename T> class List {
private:
  Node<T> *head, *tail; // Pointers to the first and last nodes in the list
  int listSize;         // Attribute to store the size of the list

  // Private helper method to set the head of the list
  void setHead(Node<T> *head) { this->head = head; }

  // Private helper method to get the head of the list
  Node<T> *getHead() { return head; }

  // Private helper method to set the tail of the list
  void setTail(Node<T> *tail) { this->tail = tail; }

  // Private helper method to get the tail of the list
  Node<T> *getTail() { return tail; }

  // Private helper method to increment the size of the list
  void incrementList() { listSize++; }

  // Private helper method to decrement the size of the list
  void decrementList() { listSize--; }

  // Private helper method to get the middle index of the list
  int getMiddleIndexOfTheList() { return size() / 2; }

  // Private helper method to get the last index of the list
  int getLastIndexOfTheList() { return size() - 1; }

  // Private helper method to check if the position is valid in the list
  bool isValidPosition(int position) {
    return position <= getLastIndexOfTheList() && position >= 0;
  }

  // Private helper method to get the node at a specific position in the list
  Node<T> *getNodeAtPosition(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position");

    Node<T> *temp;

    if (position > getMiddleIndexOfTheList()) {
      temp = getTail();
      for (int i = getLastIndexOfTheList(); i > position; i--)
        temp = temp->getPrevious();
    } else {
      temp = getHead();
      for (int i = 0; i < position; i++)
        temp = temp->getNext();
    }

    return temp;
  }

public:
  // Default constructor
  List() {
    setHead(nullptr);
    setTail(nullptr);
    listSize = 0;
  }

  // Public method to get the size of the list
  int size() { return listSize; }

  // Public method to check if the list is empty
  bool isEmpty() { return size() == 0; }

  // Public method to add a node with data at a specific position in the list
  void add(T data, int position) {
    if (position < 0)
      throw std::out_of_range("Invalid position!");

    Node<T> *newNode = new Node<T>(data);

    if (isEmpty()) {
      setHead(newNode);
      setTail(newNode);
    } else if (position == 0) {
      newNode->setNext(getHead());
      getHead()->setPrevious(newNode);
      setHead(newNode);
    } else if (position == size()) {
      newNode->setPrevious(getTail());
      getTail()->setNext(newNode);
      setTail(newNode);
    } else {
      Node<T> *temp = getNodeAtPosition(position);
      temp->getPrevious()->setNext(newNode);
      newNode->setPrevious(temp->getPrevious());
      newNode->setNext(temp);
      temp->setPrevious(newNode);
    }

    incrementList();
  }

  // Public method to add a node with data at the end of the list
  void add(T data) { add(data, size()); }

  // Public method to remove a node at a specific position in the list
  void remove(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position!");

    Node<T> *temp = nullptr;

    if (size() == 1) {
      setHead(nullptr);
      setTail(nullptr);
    } else if (position == 0) {
      temp = getHead();
      setHead(getHead()->getNext());
      getHead()->setPrevious(nullptr);
    } else if (position == getLastIndexOfTheList()) {
      temp = getTail();
      setTail(getTail()->getPrevious());
      getTail()->setNext(nullptr);
    } else {
      temp = getNodeAtPosition(position);
      temp->getPrevious()->setNext(temp->getNext());
      temp->getNext()->setPrevious(temp->getPrevious());
    }

    delete temp;

    decrementList();
  }

  // Public method to remove the last node in the list
  void remove() { remove(getLastIndexOfTheList()); }

  // Public method to get the data at a specific position in the list
  T get(int position) {
    if (isEmpty() || !isValidPosition(position))
      throw std::out_of_range("Invalid position!");

    return getNodeAtPosition(position)->getData();
  }

  // Public method to print the entire list using a custom print function
  void printList(void (*printFunction)(T)) {
    for (int i = 0; i < size(); i++)
      printFunction(get(i));
  }

  // Public method to print the data at a specific position in the list using a
  // custom print function
  void printNode(void (*printFunction)(T), int position) {
    printFunction(get(position));
  }

  // Public method to switch the positions of two nodes in the list
  void switchNodes(int position1, int position2) {
    if (isEmpty() || !isValidPosition(position1) ||
        !isValidPosition(position2)) {
      throw std::out_of_range("Invalid position!");
    } else if (position1 == position2) {
      return;
    }

    Node<T> *node1 = getNodeAtPosition(position1);
    Node<T> *node2 = getNodeAtPosition(position2);

    T temp = node1->getData();
    node1->setData(node2->getData());
    node2->setData(temp);
  }

  // Destructor to clean up memory by deleting all nodes in the list
  ~List() {
    while (!isEmpty()) {
      remove();
    }
  }
};

#endif
