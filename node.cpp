#include <iostream>
using namespace std;

struct Node{
    char data; //black, left
    Node* next; //red, right
};

Node* createNode(int x){
    Node* p = new Node;
    p->data = x;
    p->next = nullptr;
    return p;
}

struct LinkedList{
    Node *head;
    Node *tail;
};

void createList(LinkedList &list){
    list.head = nullptr;
    list.tail = nullptr;
}
void insertTail(LinkedList &list,int x) {
    if(list.head == nullptr){
        Node* p = createNode(x);
        list.head = list.tail = p;
    }
    else{
        Node* p = createNode(x);
        list.tail->next = p;
        list.tail = p;
    }
}