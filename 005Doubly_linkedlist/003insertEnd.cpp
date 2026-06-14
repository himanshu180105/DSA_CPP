#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void insertEnd(Node* &head, int x){
    Node* node = new Node(x);
    if(head == NULL)
    {
    head = node;    
    return;
    }
    Node* temp = head;
    while(temp->next)
    temp = temp->next;
    temp->next = node;
    node->prev = temp;
} 


int main (){
    return 0;
}