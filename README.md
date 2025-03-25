## Postfix Calculator

# Description

This project is a command-line postfix (Reverse Polish Notation) calculator implemented in C++. The calculator evaluates mathematical expressions written in postfix notation, where operators follow their operands. It utilizes a stack data structure for efficient computation.

# Features

Supports basic arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/).

Takes user input for postfix expressions.

Handles multiple calculations in a loop until the user decides to exit.

Provides error handling for invalid expressions.

# How It Works

1. The user is prompted to enter a postfix expression.

2. The program reads the input and processes the expression using a stack.

3. Operands are pushed onto the stack.

4. When an operator is encountered, the required number of operands are popped from the stack, and the operation is performed.

5. The result is pushed back onto the stack.

6. The final result is displayed after evaluating the entire expression.

# Example Usage

Input:

3 4 5 * + 6 -

Output:

Result: 17

Compilation & Execution

# Compile:

g++ -o your_binary_file_name main.cpp

Run:

./postfix_calculator

# Dependencies

C++ Compiler (e.g., g++)

Standard C++ Libraries

# Possible Issues & Fixes

Incorrect order of subtraction or division: Ensure operands are popped in the correct order before applying the operator.

Input handling issues: If user input causes unexpected behavior, use std::cin.ignore() to clear the input buffer.

Memory leaks: If dynamic memory is used, ensure all allocated memory is properly deleted.

# License

This project is open-source and available for modification and distribution under the MIT License.

Author: SoksophalSORN Date: 25th March, 2025

P.S. This is a side project. There won't be any future upgrade... (I guess).
