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

void deleteNode(Node* head){
    if(head == NULL){
        return;
    }
    if(head->prev){
        head->prev->next = head->next;
    }

    if(head->next){
        head->next->prev = head->prev;
    }
    delete head;
}

int main (){
    return 0;
}
