/*********************
 * Name:Marshal Pfluger
 * Coding 03
 * Purpose: Coding 3 project will allow us
 * to explore a classic stack. It will also
 * increase our understanding of proper architecture,
 * file structure, and loosely coupled architectures.
**********************/
#include "main.h"

int main()
{
    Stack stack_obj1;
    // Checks for overflow in push module
    for (int i = 0; i < SIZE * 1.5; i++)
    {
        bool push_status = stack_obj1.push(i);
        if (push_status)
        {
            std::cout << "Stack overflow has occurred." << std::endl;
        }
        else
        {
            std::cout << "Element inserted" << std::endl;
        }
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for underflow in pop module
    for (int i = 0; i < SIZE * 1.5; i++)
        try
        {
            int pop_value = stack_obj1.pop();
            std::cout << "value is:" << pop_value << std::endl;
        }
        catch(int e)
        {
            std::cout << "Stack underflow has occurred" << std::endl;
        }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for correct peek operation.
    Stack stack_obj2;
    for (int i = 0; i < SIZE / 2; i++)
    {
        bool push_status = stack_obj2.push(i);
        if (push_status)
        {
            std::cout << "Stack overflow has occurred." << std::endl;
        }
        else
        {
            try
            {
                int peek_value = stack_obj2.peek();
                std::cout << "value is:" << peek_value << std::endl;
            }
            catch(int e)
            {
                std::cout << "Stack underflow has occurred" << std::endl;
            }
            std::cout << "Element inserted" << std::endl;
        }
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for correct peek operation with overflow
    Stack stack_obj3;
    for (int i = 0; i < SIZE + 1; i++)
    {
        bool push_status = stack_obj3.push(i);
        if (push_status)
        {
            std::cout << "Stack overflow has occurred." << std::endl;
        }
        else
        {
            try
            {
                int peek_value = stack_obj3.peek();
                std::cout << "value is:" << peek_value << std::endl;
            }
            catch(int e)
            {
                std::cout << "Stack underflow has occurred" << std::endl;
            }
            std::cout << "Element inserted" << std::endl;
        }
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for correct peek operation with underflow
    Stack stack_obj4;
    try
    {
        int peek_value = stack_obj4.peek();
        std::cout << "value is:" << peek_value << std::endl;
    }
    catch(int e)
    {
        std::cout << "Stack underflow has occurred" << std::endl;
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Check for correct is_empty operation with underflow
    Stack stack_obj5;
    bool empty_check = stack_obj5.is_empty();
    if (empty_check)
    {
        std::cout << "The stack is empty" << std::endl;
    }
    else
    {
        std::cout << "The stack is not empty" << std::endl;
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for correct is_empty operation in middle of stack
    Stack stack_obj6;
    for (int i = 0; i < SIZE - 5; i++)
    {
        bool push_status = stack_obj6.push(i);
        if (push_status)
        {
            std::cout << "Stack overflow has occurred." << std::endl;
        }
        else
        {
            empty_check = stack_obj6.is_empty();
            if (empty_check)
            {
                std::cout << "The stack is empty" << std::endl;
            }
            else
            {
                std::cout << "The stack is not empty" << std::endl;
            }
        }
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;

    // Checks for correct is_empty operation with overflow
    Stack stack_obj7;
    for (int i = 0; i < SIZE +2 ; i++)
    {
        bool push_status = stack_obj7.push(i);
        if (push_status)
        {
            std::cout << "Stack overflow has occurred." << std::endl;
        }
        else
        {
            empty_check = stack_obj7.is_empty();
            if (empty_check)
            {
                std::cout << "The stack is empty" << std::endl;
            }
            else
            {
                std::cout << "The stack is not empty" << std::endl;
            }
        }
    }
    std::cout << "end current test" << std::endl;
    std::cout << std::endl;
    return 0;
}




