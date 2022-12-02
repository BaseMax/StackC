/**
 * 
 * @file Stack.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief Stack Implementation in C
 * @version 0.1
 * @date 2022-12-02
 * @copyright Copyright (c) 2022
 * 
 */

#include "Stack.h"

/**
 * @brief Create a new stack
 * @param size
 * @return Stack* 
 */
Stack* newStack(int size)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->items = (int*)malloc(stack->size * sizeof(int));
    return stack;
}

/**
 * @brief Check if the stack is full
 * @param stack
 * @return true 
 * @return false 
 */
bool isFull(Stack* stack)
{
    return stack->top == stack->size - 1;
}

/**
 * @brief Check if the stack is empty
 * @param stack
 * @return true 
 * @return false 
 */
bool isEmpty(Stack* stack)
{
    return stack->top == -1;
}
