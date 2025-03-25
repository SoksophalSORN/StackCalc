#include "functions.h"

int main(){ 
  std::cout << "Welcome to Postfix Calculator" << std::endl;
  char pow = powerButton();
  while (pow == 'y'|| pow == 'Y') {
    std::cout << std::flush;
    std::cout << "Enter a posfix expression: " << std::flush;
    std::string input;
    std::getline(std::cin, input);
    double result = Calculator(input);
    std::cout << "Result: " << result << std::endl;
    pow = powerButton();
  }
  std::cout << "Thanks for using our program." << std::endl;
  return 0;
}
