#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Create A class node
class node
{
public:
    int data;
    node *next;
    // Node Class Constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insert Element At Tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Display All Element
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Insert At Head
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Seraching  At Linked List
bool Search(node *head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Delete a node
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// Delete a head
void deleteHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

// Reverse a list
node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Reverse a list with recursion
node *reverseRecursion(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    // insertAtHead(head, 5);
    // display(head);
    // cout << Search(head, 4) << endl;
    // cout << Search(head, 7);
    // deletion(head, 2);
    // display(head);
    // deleteHead(head);
    // display(head);
    // node *newhead = reverse(head);
    node *newhead = reverseRecursion(head);
    display(newhead);

    return 0;
}