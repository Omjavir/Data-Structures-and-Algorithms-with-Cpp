#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

void inserAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int counter = 1;
    while (counter < position - 1)
    {
        temp = temp->next;
        counter++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // Memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int counter = 1;
        while (counter < position)
        {
            prev = curr;
            curr = curr->next;
            counter++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        if (prev->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(12);
    // *** Printing values of node1
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Creating head node to insert a new node
    Node *head = node1;
    Node *tail = node1;
    cout << "Before " << endl;
    print(head);
    // ***** Inserting a new node at head
    // insertAtHead(head, 14);
    // insertAtHead(head, 16);
    // ***** Inserting a new node at tail
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    cout << "After " << endl;
    print(head);
    // ***** Inserting a new node at position
    inserAtPosition(head, tail, 3, 25);
    print(head);
    // ***** Deleting a node at position
    deleteAtPosition(head, tail, 4);
    print(head);
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    return 0;
}