//
//  07 LL reverse by recursion.cpp
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

struct Node* head;

void insert0(int num){
    Node* temp = new Node;
    temp->data = num;
    temp->next = head;
    head = temp;
    return;
};

void printl(Node* head){
    if (head == NULL)
        return;
    cout << head->data << " ";
    printl(head->next);
};

void reverse(Node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
    
};

int main(){
    head = NULL;
    insert0(5);
    insert0(4);
    insert0(3);
    insert0(2);
    insert0(1);
    printl(head);
    cout << endl;
    reverse(head);
    printl(head);
    return 0;
}





