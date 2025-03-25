#include <iostream> // For basic input/output
#include <sstream> // For streaming a string
#include <string> // For std::string and its properties
#include <limits> // For resolving buffer overflow issue

// Check out the bodies of function in functions.h

// Structure of each node;
class Node{
  public:
    int data;
    Node *next;
    Node(int value) {
      data = value;
      next = nullptr;
    }
};

// Providing interfaces for operands and operators holder (stk)
class Stack{
  private:
    Node *top;
  
  public:
    // Default constructor
    Stack(){ 
      top = nullptr;
    }

    void push(int value); // push value into stack
    int pop(); // get the top most value from the stack and kill the node
    int peek(); // check the value of the top most node
    size_t size(); // get the size of the stack
    bool isEmpty(); // check if the stack is empty or not
    bool isFull(); // check if the stack is full or not
    void print(); // print out the available nodes in the stack
    void resetStack(); // clear out the stack by freeing the memory
};

// Calculator function
double Calculator(std::string input);
