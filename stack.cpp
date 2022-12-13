/*********************
 * Name:Marshal Pfluger
 * Coding 03
 * Purpose: Coding 3 project will allow us
 * to explore a classic stack. It will also
 * increase our understanding of proper architecture,
 * file structure, and loosely coupled architectures.
**********************/

#include "stack.h"

Stack::Stack()
{
    top = -1;
}
// Module to insert data into stack
bool Stack::push(int x)
{
    if (top < SIZE - 1)
    {
        phys_stack[++top] = x;
    }
    return top >= (SIZE - 1);
}

// Module to return data and remove it from stack
int Stack::pop()
{
    if (is_empty())
    {
        throw 13;
    }
    return phys_stack[top--];
}

// Module to view data at current location
int Stack::peek()
{
    if (is_empty())
    {
        throw 13;
    }
    return phys_stack[top];
}

// Module to check if stack is empty at location
bool Stack::is_empty() const
{
    return top < END;
}

// Destructor
Stack::~Stack()
{
}




