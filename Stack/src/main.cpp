#include "include/Stack.h"
#include <iostream>

using namespace std;

int main() {
  // Create a stack of integers
  Stack<int> stack;

  // Testing the push method
  cout << "Pushing elements onto the stack: ";
  for (int i = 1; i <= 5; ++i) {
    stack.push(i);
    cout << i << " ";
  }
  cout << endl;

  // Testing the size method
  cout << "Size of the stack: " << stack.size() << endl;

  // Testing the isEmpty method
  cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

  // Testing the peek method
  cout << "Top element: " << stack.peek() << endl;

  // Testing the pop method
  cout << "Popping elements from the stack: ";
  while (!stack.isEmpty()) {
    cout << stack.pop() << " ";
  }
  cout << endl;

  // Testing pop on an empty stack (should generate an exception)
  try {
    stack.pop();
  } catch (const std::out_of_range &e) {
    cerr << "Exception caught: " << e.what() << endl;
  }

  return 0;
}
