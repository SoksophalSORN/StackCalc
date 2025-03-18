#include <iostream>
#include <sstream>
#include <string>

class Node{
  public:
    int data;
    Node *next;
    Node(int value) {
      data = value;
      next = nullptr;
    }
};

class Stack{
  private:
    Node *top;
  
  public:
    Stack(){ // Default constructor
      top = nullptr;
    }

    void push(int value);
    int pop();
    int peek();
    size_t size();
    bool isEmpty();
    bool isFull();
    void print();
    void resetStack();
};

double Calculator(std::string input);
