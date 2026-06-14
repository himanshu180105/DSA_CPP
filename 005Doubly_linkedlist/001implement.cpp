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

int main (){
    return 0;
}