# Stack Implementation in C

## Overview
This project implements a simple stack data structure using a linked list in C. It supports fundamental stack operations such as push, pop, and display.

## Features
- **Push Operation:** Adds an element to the top of the stack.
- **Pop Operation:** Removes and returns the top element of the stack.
- **Display Operation:** Prints all elements in the stack.
- **Dynamic Memory Allocation:** Uses `malloc` for dynamic memory management.

## File Structure
- `main.c`: Contains the implementation of the stack and its operations.
- `README.md`: Documentation for the project.

## Compilation and Execution
### Prerequisites
- A C compiler such as `gcc`.

### Steps to Compile and Run
1. Open a terminal and navigate to the project directory.
2. Compile the program using:
   ```bash
   gcc main.c -o stack_program
   ```
3. Run the executable:
   ```bash
   ./stack_program
   ```

## Data Structures
The program uses a linked list to implement the stack:
```c
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

typedef struct {
    StackNode* top;
} Stack;
```
Each stack node stores:
- `data`: The integer value of the node.
- `next`: Pointer to the next node in the stack.

## Functions
### Core Functions
- `Stack* createStack()`: Initializes a new empty stack.
- `void push(Stack* stack, int data)`: Pushes an integer onto the stack.
- `int pop(Stack* stack)`: Pops and returns the top element from the stack.
- `void display(Stack* stack)`: Displays all elements in the stack.

## Example Output
```
Stack Contents:
50
40
30
20
10
Popped: 50
Popped: 40
Stack Contents:
30
20
10
```

## Author
This project demonstrates basic stack operations using a linked list.

## License
This project is open-source and available for use under the MIT License.
