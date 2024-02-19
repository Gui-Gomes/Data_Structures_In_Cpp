#include "include/DoublyLinkedList.h"
#include <iostream>

using namespace std;

// Function to print an integer
void printInt(int value) { cout << value << " "; }

int main() {
  // Create a doubly linked list of integers
  List<int> nums;

  // Add elements to the list
  nums.add(10);
  nums.add(20);
  nums.add(30);
  nums.add(40);

  // Print the initial list
  cout << "Initial list: ";
  nums.printList(printInt);
  cout << endl;

  // Add an element at a specific position
  nums.add(25, 2);

  // Print the updated list
  cout << "List after adding 25 at position 2: ";
  nums.printList(printInt);
  cout << endl;

  // Remove an element from a specific position
  nums.remove(1);

  // Print the updated list
  cout << "List after removing element at position 1: ";
  nums.printList(printInt);
  cout << endl;

  // Get and print the element at a specific position
  cout << "Element at position 2: " << nums.get(2) << endl;

  // Switch nodes at positions 0 and 2
  nums.switchNodes(0, 2);

  // Print the list after switching nodes
  cout << "List after switching nodes at positions 0 and 2: ";
  nums.printList(printInt);
  cout << endl;

  return 0;
}
