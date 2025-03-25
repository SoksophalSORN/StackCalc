#include "class.h"

// Please refer back to the class.h header file for their usage

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
  std::stringstream stream(input); // converting the string into stream
  std::string token; // variable for holding each token of a stream
  while (stream >> token) { // getting each token of a stream; loop breaks when there is no more
    if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) { // checking if it is number or not
      stk.push(stod(token)); // convert from string to double
    } else {
      if (stk.size() < 2) { // Checking the size of the stack
        std::cerr << "ERROR. Not enough operands" << std::endl;
        stk.resetStack(); // Reseting stack before exiting the program to prevent dangling pointer
        // stk.print();
        exit(EXIT_FAILURE);
      }

      double a = stk.pop();
      double b = stk.pop();
      double result = 0;

      // Cannot use switch because token is not integer.
      if (token == "+") result = a + b;
      else if (token == "-") result = a - b;
      else if (token == "*") result = a * b;
      else if (token == "/") {
        if (b == 0) {
          std::cerr << "ERROR: dividing by zero" << std::endl;
          stk.resetStack();
          // stk.print();
          exit(EXIT_FAILURE);
        }
        result = a / b;
      }
      stk.push(result);
    }
  }
  if (stk.size() > 1) {
    std::cerr << "Error: Invalid Expression" << std::endl;
    stk.resetStack();
    // stk.print();
    exit(EXIT_FAILURE);
  }
  double tmp = stk.pop();
  stk.resetStack();
  // stk.print();
  return tmp;
}

char powerButton() {
  char pow;
  std::cout << "Please enter Y to start/continue the program or enter N to end the program: " << std::flush;
  std::cin.get(pow);
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clears input buffer
  if (pow == 'y' || pow == 'Y' || pow == 'N' || pow == 'n') {
    return pow;
  } else {
    std::cerr << "Error: Invalid input" << std::endl; 
    return 'n';
  }
}
