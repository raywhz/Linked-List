//
//  05 Linked List reverse iterative.cpp
//  data structure
//
//  Created by Haozhou Wu on 9/23/17.
//  Copyright © 2017 Haozhou Wu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printl(Node* head){
    cout << "Linked list is: ";
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

// head has to be returned if it is not a global variable
Node* insert0(Node* head, int num){
    Node* temp = new Node;
    temp->data = num;
    temp->next = head;
    head = temp;
    return head;
};

Node* reverse(Node* head){
    Node *prev, *cur, *next;
    prev = NULL;
    cur = head;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    
    return head;
};


int main(){
    struct Node* head = NULL;
    head = insert0(head,4);
//    head = insert0(head,3);
//    head = insert0(head,2);
//    head = insert0(head,1);
    printl(head);
    
    head = reverse(head);
    printl(head);
}

