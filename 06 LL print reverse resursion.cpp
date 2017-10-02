//
//  06 LL print reverse.cpp
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

// insert at the beginning
Node* insert0(Node* head, int num){
    Node* temp = new Node;
    temp->data = num;
    temp->next = head;
    head = temp;
    
    return head;
};

void printl(Node* head){
    if (head == NULL){
        cout << endl;
        return;
    }
    cout << head->data << " ";
    printl(head->next);
};

void printr(Node* head){
    if (head == NULL)
        return;
    
    printr(head->next);
    cout << head->data << " ";
};

int main(){
    Node* head = NULL;
    head = insert0(head, 5);
    head = insert0(head, 4);
    head = insert0(head, 3);
    head = insert0(head, 2);
    head = insert0(head, 1);
    printl(head);
    printr(head);

}




