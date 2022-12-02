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

#endif
