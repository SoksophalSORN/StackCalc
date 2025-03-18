#include "functions.h"

int main(){ 
  // Stack s1;
  // for(int i = 1; i <= 10; i++) {
  //   s1.push(i);
  // }
  // std::cout << "size: " << s1.size() << std::endl;
  // s1.print();

  // s1.pop();
  // s1.pop();
  // s1.pop();
  // std::cout << "size: " << s1.size() << std::endl;
  // 
  // s1.print();

  // s1.resetStack();
  // s1.print();
  std::string input;
  std::cout << "Enter a posfix expression: " << std::flush;
  std::getline(std::cin, input);
  std::cout << "Result: " << Calculator(input) << std::endl;

  return 0;
}
