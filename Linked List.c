#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
void push(struct Node* head, int data)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}

void deleteNode(struct Node *head, int data)
{

}

int main()
{


    return 0;
}
