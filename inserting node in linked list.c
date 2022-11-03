/*A C program to demonstrate
 all insertion methods
 of node in linked list*/

#include<stdio.h>
#include<stdlib.h>




//A Linked List node
struct Node
{
    int data;
    struct Node *next;
};
 //Inserting a new node on the front of the list
 void push(struct Node** head_ref, int new_data)
 {
     //1.Allocate node
     struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

     //2.put in data
     new_node->data = new_data;

     //3.make next of new node as head
     new_node->next = (*head_ref);

     //4.move the head to point to the new node
     (*head_ref) = new_node;
 }

 /*Inserting Node at index*/
 void insertAtIndex(struct Node *head, int data, int index)
 {
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
     struct Node* p = head;
     int i = 0;
     while(i!=index-1)
     {
         p = p->next;
         i++;
     }
     ptr->data = data;
     ptr->next = p->next;
     p->next = ptr;
 }

  /*insert a new node after the given new prev_node*/
 void insertAfter(struct Node* prev_node, int new_data)
 {
     //1. check if the given prev_node is null
     if(prev_node == NULL)
     {
         printf("the given previous node cannot be null");
         return;
     }

     //2.Allocate new node
     struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

     //3.put in the data
     new_node->data = new_data;

     //4. Make next of new node as next of prev_node
     new_node->next = prev_node->next;

     //5. Move the next of prev_node as new_node
     prev_node->next = new_node;
 }


/*Append adds a new node at the end*/
void append(struct Node** head_ref, int new_data)
{
    //1.Allocate node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;//used in step 5

    //2.put in the data
    new_node->data = new_data;

    //this new node is going to be last node, so make next of it as Null
    new_node->next = NULL;

    //4. If the linked list is empty, then make the new node as head

if(*head_ref == NULL)
{
    *head_ref = new_node;
    return;
}
//5. Else traverse till the last node
while(last->next != NULL)
    last = last->next;
//6. change he next of last node
last->next = new_node;
return;
}

 //This function prints contents of linked list starting from head
 void printList(struct Node *node)
 {
     while(node != NULL)
     {
         printf(" %d ", node->data);
         node = node->next;
     }
 }

/*driver program to test above function*/
int main()
{
    //start with the empty list
    struct Node* head = NULL;

    //Insert 6 at end
    append(&head, 6);

    //Insert 7 at the beginning
    push(&head, 7);

    //Insert 1 at the beginning
    push(&head, 1);

    //Insert 4 at the end
    append(&head, 4);

    //Insert 8, after 7.
    insertAfter(head->next->next, 8);

    //Insert 5, after 6.
    insertAtIndex(head, 5, 4);





    printf("\n Created Linked List is: ");
    printList(head);

    return 0;
}
