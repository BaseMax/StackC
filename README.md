# Stack C

This is a simple stack implementation in C, using an array as the underlying data structure. It's possible to resize the stack, and it's possible to set the initial size of the stack.

## Functions

- `Stack* newStack(int size)`: Create a new stack with a given size.
- `bool isFull(Stack* stack)`: Check if the stack is full.
- `bool isEmpty(Stack* stack)`: Check if the stack is empty.
- `void push(Stack* stack, int item)`: Push an item onto the stack.
- `int pop(Stack* stack)`: Pop an item off the stack.
- `int peek(Stack* stack)`: Peek at the top of the stack.
- `void printStack(Stack* stack)`: Print the stack.
- `void destroyStack(Stack* stack)`: Destroy the stack.
- `char* stackToString(Stack* stack)`: Convert the stack to a string.
- `Stack* resizeStack(Stack* stack, int size)`: Resize the stack to a new size.

## Usage

```c
// Create a stack of capacity 5
Stack* stack = newStack(5);

// Push items to stack
push(stack, 1);
push(stack, 2);
push(stack, 3);
push(stack, 4);
push(stack, 5);

push(stack, 100);

// Check if stack is full
if (isFull(stack)) {
    printf("Stack is full!\n");
}

// Print the stack
printStack(stack);

// Resize the stack
stack = resizeStack(stack, 10);

// Push an item to stack
push(stack, 100);

// Print the stack
printStack(stack);

// Pop items from stack
pop(stack);
pop(stack);

// Convert the stack to string
char* str = stackToString(stack);
printf("%s\n", str);

// Check if the stack is empty
if (isEmpty(stack)) {
    printf("Stack is empty!\n");
} else {
    printf("Stack is not empty!\n");
}

// Peek the top item from stack
printf("Top item: %d\n", peek(stack));

// Destroy the stack
destroyStack(stack);

// Print the stack
printf("%s\n", stackToString(stack));

// Check if the stack is empty
if (isEmpty(stack)) {
    printf("Stack is empty!\n");
} else {
    printf("Stack is not empty!\n");
}
```

Copyright Max Base, 2022
