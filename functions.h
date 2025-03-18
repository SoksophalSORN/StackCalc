#include "class.h"

void Stack::push(int value){
  Node *newNode = new Node(value);
  newNode->next = top;
  top = newNode;
}

int Stack::pop(){
  if (!top) {
    std::cout << "The Stack is Empty! There is nothing to pop." << std::endl;
    exit(EXIT_FAILURE);
  } 
  int value = top->data;
  Node *tmp = top->next;
  delete top;
  top = tmp;
  return value;
}

int Stack::peek(){
  if (!top) {
    std::cout << "The Stack is Empty! There is nothing to pop." << std::endl;
    exit(EXIT_FAILURE);
  }
  return top->data;
}

bool Stack::isEmpty() {
  if (!top) {
    return true;
  } else return false;
}

bool Stack::isFull() {
  if (top) {
    return true;
  } else return false;
}

void Stack::print() {
  Node *tmp = top;
  if (!tmp) {
    std::cout << "The Stack is Empty! There is nothing see." << std::endl;
    return;
  }
  while (tmp != nullptr) {
    std::cout << "-----------------" << std::endl;
    std::cout << "|\t" << tmp->data << "\t|" << std::endl;
    std::cout << "-----------------" << std::endl;
    if (tmp->next) {
      std::cout << "\t|\t" << std::endl;
      std::cout << "\t|\t" << std::endl;
      std::cout << "\t\\/\t" << std::endl;
    }
    tmp = tmp->next;
  }
}


void Stack::resetStack(){
  Node *tmp = nullptr;
  while (top != nullptr) {
    tmp = top->next;
    delete top;
    top = nullptr;
    top = tmp;
  }
}

size_t Stack::size() {
  size_t size = 0;
  Node *tmp = top;
  while (tmp != nullptr) {
    size++;
    tmp = tmp->next;
  }
  return size;
}

double Calculator(std::string input){
  Stack stk;
  std::stringstream stream(input);
  std::string opt;
}
