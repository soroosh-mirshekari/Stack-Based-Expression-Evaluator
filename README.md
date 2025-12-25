# Stack-Based Expression Evaluator in C++

## Overview
This project implements a stack-based system for parsing and evaluating mathematical
expressions in C++. The implementation focuses on correct handling of operator
precedence, associativity, and parentheses using fundamental stack data structures.

The project is designed to reinforce understanding of expression parsing and
stack-based algorithms without relying on high-level parsing libraries.

## Objective
The main objectives of this project are to:
- implement a stack data structure and its core operations,
- convert mathematical expressions between different notations,
- evaluate expressions while respecting precedence and associativity rules,
- handle common syntactic and runtime errors robustly.

## Approach
The system processes expressions through:
- tokenization of input strings,
- conversion from infix notation to postfix and/or prefix notation,
- evaluation of the converted expressions using stack-based computation.

Special attention is given to handling edge cases such as invalid expressions,
division by zero, and mismatched parentheses.

## Key Concepts
stacks • expression parsing • infix, postfix, and prefix notation •
operator precedence • associativity • error handling • algorithmic correctness

## Project Structure
- `Stack_Project(402482328).cpp`: complete implementation of the stack-based evaluator

## How to Run
```bash
g++ -std=c++17 Stack_Project\(402482328\).cpp -o stack_evaluator
./stack_evaluator
