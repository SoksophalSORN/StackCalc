#include "functions.h"

int main(){ 
  std::cout << "=============================" << std::endl;
  std::cout << "Welcome to Postfix Calculator" << std::endl;
  std::cout << "=============================" << std::endl;
  char pow = powerButton();
  std::cout << "=============================" << std::endl;
  while (pow == 'y'|| pow == 'Y') {
    std::cout << std::flush;
    std::cout << "Enter a posfix expression: " << std::flush;
    std::string input;
    std::getline(std::cin, input);
    double result = Calculator(input);
    std::cout << "Result: " << result << std::endl;
    std::cout << "=============================" << std::endl;
    pow = powerButton();
    std::cout << "=============================" << std::endl;
  }
  std::cout << "Thanks for using our program." << std::endl;
  std::cout << "=============================" << std::endl;
  return 0;
}
