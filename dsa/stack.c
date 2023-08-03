#include "stack.h"
//sanket
void push(Stack *stack,int item)
{
 if (is_full(stack))
 printf("overflow");
 else
 {
 	stack->top++;
 	stack->data[stack->top]=item;
 }
} 

void init(Stack *stack)
{
    stack->top=0;
}

//rahul
void is_empty(Stack *stack)
{

}
void is_full(Stack *stack)
{}

void pop(Stack * stack)
{
    
}
