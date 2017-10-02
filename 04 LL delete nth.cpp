//
//  04 Linked List delete nth.cpp
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

// insert a number at the beginning
void insert0(int num){
    Node* temp = new Node;
    temp->data = num;
    temp->next = NULL;
    if(head!=NULL)
        temp->next = head;
    head = temp;
};

// insert a number at nth position, list starts from index 0
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

// delete nth number, index starts from 0
void deleten(int nth){
    Node* cur = head;
    Node* temp = NULL;
    if(nth == 0){
        head = head->next;
    }
    for (int i = 0; i < nth-1; i++){
        cur = cur->next;
    }
    if(cur->next == NULL){
        cout << "Error, no nth node found!" << endl;
        return;
    }
    else
        temp = cur->next;
    cur->next = temp->next;
    
    
};

// print the linked list
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
//    int length = 3;
    insert0(5);
    insert0(4);
    insert0(3);
    insert0(2);
    insert0(1);
    printl();
    
    deleten(4);
    printl();
    
    deleten(3);
    printl();
    
    
    
    return 0;
}





