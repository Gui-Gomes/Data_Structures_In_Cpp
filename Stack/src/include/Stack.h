#pragma once
#ifndef STACK_H
#define STACK_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"
#include <stdexcept>

template <typename T> class Stack {
private:
  List<T> *stack; // Pointer to a Doubly Linked List used as the underlying data
                  // structure for the stack

  // Private method to set the underlying stack
  void setStack(List<T> *stack) { this->stack = stack; }

  // Private method to get the underlying stack
  List<T> *getStack() { return stack; }

public:
  // Constructor: Initializes the stack with a new Doubly Linked List
  Stack() { setStack(new List<T>()); }

  // Destructor: Deletes the underlying Doubly Linked List
  ~Stack() { delete stack; }

  // Returns the size of the stack
  int size() { return getStack()->size(); }

  // Checks if the stack is empty
  bool isEmpty() { return getStack()->isEmpty(); }

  // Pushes an element onto the stack
  T push(T data) {
    getStack()->add(data);
    return data;
  }

  // Pops the top element from the stack
  T pop() {
    if (!isEmpty()) {
      T data = getStack()->get(size() - 1);
      getStack()->remove();
      return data;
    }
    throw std::out_of_range("Invalid position!");
  }

  // Returns the top element of the stack without removing it
  T peek() { return getStack()->get(size() - 1); }
};

#endif
