#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include "../../../Doubly_Linked_List/src/include/DoublyLinkedList.h"

template <typename T> class Queue {
private:
  List<T> *queue;

  // Private helper function to set the internal queue
  void setQueue(List<T> *queue) { this->queue = queue; }

  // Private helper function to get the internal queue
  List<T> *getQueue() { return queue; }

public:
  // Constructor: initializes the queue with a new List
  Queue() { setQueue(new List<T>()); }

  // Destructor: deletes the internal queue
  ~Queue() { delete queue; }

  // Checks if the queue is empty
  bool isEmpty() { return getQueue()->isEmpty(); }

  // Returns the size of the queue
  int size() { return getQueue()->size(); }

  // Adds an element to the end of the queue
  T add(T data) {
    getQueue()->add(data);
    return data;
  }

  // Retrieves the element at the front of the queue without removing it
  T front() { return getQueue()->get(0); }

  // Offers an element at a specified position in the queue
  T offer(T data, int position) {
    getQueue()->add(data, position);
    return data;
  }

  // Removes and returns the element at the front of the queue
  T remove() {
    T data = getQueue()->get(0);
    getQueue()->remove(0);
    return data;
  }
};

#endif
