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

void insertFront(Node* &head, int x){
    Node* node = new Node(x);

    node->next = head;
    if(head){
        head->prev = node;
    head = node;
    }
}

int main (){
    return 0;
}