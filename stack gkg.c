#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

struct stack //structure to represent a stack
{
    int top;
    unsigned capacity;
    int* array;
};
//function to create stack
struct stack* creatStack(unsigned capacity)
{
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
};

int isFull(struct stack* stack)
{
    return stack->top == -1;
}

int isEmpty(struct stack* stack)
{
    return stack->top == -1;
}

void push(struct stack* stack, int item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
    struct stack* stack = creatStack(100);


    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));
    return 0;
}
