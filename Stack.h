/**
 * 
 * @file Stack.h
 * @author Max Base (maxbasecode@gmail.com)
 * @brief Stack Implementation in C
 * @version 0.1
 * @date 2022-12-02
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack
{
    int top;
    unsigned size;
    int *items;
} Stack;

/**
 * @brief Create a new stack
 * @param size
 * @return Stack* 
 */
Stack* newStack(int size);

/**
 * @brief Check if the stack is full
 * @param stack
 * @return true 
 * @return false 
 */
bool isFull(Stack* stack);

/**
 * @brief Check if the stack is empty
 * @param stack
 * @return true 
 * @return false 
 */
bool isEmpty(Stack* stack);

/**
 * @brief Push an item to stack
 * @param stack
 * @param item
 */
void push(Stack* stack, int item);

/**
 * @brief Pop an item from stack
 * @param stack
 * @return int 
 */
int pop(Stack* stack);

/**
 * @brief Peek the top item from stack
 * @param stack
 * @return int 
 */
int peek(Stack* stack);

/**
 * @brief Print the stack
 * @param stack
 */
void printStack(Stack* stack);

/**
 * @brief Destroy the stack
 * @param stack
 */
void destroyStack(Stack* stack);

/**
 * @brief Convert the stack to string
 * @param stack
 * @return char* 
 */
char* stackToString(Stack* stack);

/**
 * @brief Resize the stack
 * @param stack
 * @param size
 * @return Stack* 
 */
Stack* resizeStack(Stack* stack, int size);

#endif
