//
//  03 Linked list insert at nth.cpp
//  data structure
//
//  Created by Haozhou Wu on 9/22/17.
//  Copyright © 2017 Haozhou Wu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node* head;

struct Node{
    int data;
    Node* next;
};

void insert0(int num){
    Node* temp = new Node;
    temp->data = num;
    temp->next = NULL;
    if(head!=NULL)
        temp->next = head;
    head = temp;
};

void insertn(int num, int nth, int length){
    if (nth>length){
        cout << "Cannot exceed the list length" << endl;
        return;
    }
    if (nth ==0){
        insert0(num);
        return;
    }
    Node* temp = new Node;
    temp->data = num;
    temp->next = NULL;
    
    Node* cur = head;
    for (int i = 0; i<nth-1; i++){
        cur = cur->next;
    }
    if (cur->next!=NULL)
        temp->next = cur->next;
    cur->next = temp;
};

void printl(){
    cout << "Linked list is: " << endl;
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main(){
    head = NULL;
    int length=5;
    insert0(5);
    insert0(4);
    insert0(3);
    insert0(2);
    insert0(1);
    printl();
    
    insertn(19, 5, length++);
    printl();
    
    insertn (28, 7, length++);
    printl();
    
    
    
    return 0;
}




