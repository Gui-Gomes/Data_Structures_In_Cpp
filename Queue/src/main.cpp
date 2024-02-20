#include "include/Queue.h"
#include <iostream>

using namespace std;

int main() {
  // Create a queue of integers
  Queue<int> intQueue;

  // Check if the queue is empty (should be true)
  cout << "Is Queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << endl;

  // Add elements to the queue
  intQueue.add(10);
  intQueue.add(20);
  intQueue.add(30);

  // Check the size of the queue (should be 3)
  cout << "Queue size: " << intQueue.size() << endl;

  // Retrieve and print the front element (should be 10)
  cout << "Front element: " << intQueue.front() << endl;

  // Offer an element at a specific position
  intQueue.offer(15, 1);

  // Check the size again (should be 4)
  cout << "Queue size after offering: " << intQueue.size() << endl;

  // Remove and print elements from the front
  cout << "Removed element: " << intQueue.remove() << endl;
  cout << "Removed element: " << intQueue.remove() << endl;

  // Check the final state of the queue
  cout << "Is Queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << endl;

  return 0;
}
