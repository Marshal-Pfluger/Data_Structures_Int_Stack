/*********************
 * Name:Marshal Pfluger
 * Coding 03
 * Purpose: Coding 3 project will allow us
 * to explore a classic stack. It will also
 * increase our understanding of proper architecture,
 * file structure, and loosely coupled architectures.
**********************/

#ifndef STACKS_PROJ_STACK_H
#define STACKS_PROJ_STACK_H

#include <iostream>
#define SIZE 10
#define END 0

class Stack
{
public:
    // Constructors
    Stack();

    //Destructors
    ~Stack();

    bool push(int x);
    int pop();
    int peek();
    bool is_empty() const;

private:
    int top;
    int phys_stack[SIZE];
};

#endif //STACKS_PROJ_STACK_H