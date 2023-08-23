#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 100 // Change this value as needed

typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

// Function prototypes
void push(Stack *stack, int item);
void init(Stack *stack);
int is_empty(Stack *stack);
int is_full(Stack *stack);
int pop(Stack *stack);

#endif /* STACK_H */
