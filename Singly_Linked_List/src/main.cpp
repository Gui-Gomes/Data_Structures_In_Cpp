#include <iostream>
#include <string>
#include "include/SinglyLinkedList.h"

using namespace std;

// Function to print elements of the list
template <typename T>
void printElement(T data) {
  cout << data << " ";
}

int main() {
  // Create a list of integers
  List<int> intList;

  // Add elements to the list
  intList.add(10);
  intList.add(20);
  intList.add(30);

  // Print the list
  cout << "List of integers: ";
  intList.printList(printElement<int>);
  cout << endl;

  // Add element at a specific position
  intList.add(25, 2);

  // Print the list after addition
  cout << "List after addition: ";
  intList.printList(printElement<int>);
  cout << endl;

  // Remove element from a specific position
  intList.remove(1);

  // Print the list after removal
  cout << "List after removal: ";
  intList.printList(printElement<int>);
  cout << endl;

  // Access and print individual elements
  cout << "Element at position 1: " << intList.get(1) << endl;

  // Switch elements' positions
  intList.switchNodes(0, 2);

  // Print the list after switching elements
  cout << "List after switching elements: ";
  intList.printList(printElement<int>);
  cout << endl << endl << endl;

  // Create a list of strings
  List<string> stringList;

  // Add elements to the list
  stringList.add("Apple");
  stringList.add("Banana");
  stringList.add("Orange");

  // Print the list
  cout << "List of strings: ";
  stringList.printList(printElement);
  cout << endl;

  // Add element at a specific position
  stringList.add("Grapes", 2);

  // Print the list after addition
  cout << "List after addition: ";
  stringList.printList(printElement);
  cout << endl;

  // Remove element from a specific position
  stringList.remove(1);

  // Print the list after removal
  cout << "List after removal: ";
  stringList.printList(printElement);
  cout << endl;

  // Access and print individual elements
  cout << "Element at position 1: " << stringList.get(1) << endl;

  // Switch elements' positions
  stringList.switchNodes(0, 2);

  // Print the list after switching elements
  cout << "List after switching elements: ";
  stringList.printList(printElement);
  cout << endl << endl << endl;

  // Create a list of doubles
  List<double> doubleList;

  // Add elements to the list
  doubleList.add(3.14);
  doubleList.add(2.718);
  doubleList.add(1.618);

  // Print the list
  cout << "List of doubles: ";
  doubleList.printList(printElement);
  cout << endl;

  // Add element at a specific position
  doubleList.add(2.5, 2);

  // Print the list after addition
  cout << "List after addition: ";
  doubleList.printList(printElement);
  cout << endl;

  // Remove element from a specific position
  doubleList.remove(1);

  // Print the list after removal
  cout << "List after removal: ";
  doubleList.printList(printElement);
  cout << endl;

  // Access and print individual elements
  cout << "Element at position 1: " << doubleList.get(1) << endl;

  // Switch elements' positions
  doubleList.switchNodes(0, 2);

  // Print the list after switching elements
  cout << "List after switching elements: ";
  doubleList.printList(printElement);
  cout << endl;


  return 0;
}
