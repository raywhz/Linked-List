//
//  main.cpp
//  data structure
//
//  Created by Haozhou Wu on 9/20/17.
//  Copyright © 2017 Haozhou Wu. All rights reserved.
//

#include <iostream>
using namespace std;

// global variable should be declare after include, but before all code!
struct Node* head;

struct Node{
    int data;
    Node* next;
};

// insert at beginning

Node* insert0(Node* head, int x){
    Node* temp1 = new Node;
    temp1->data = x;
    temp1->next = head;
    head = temp1;
    return head;
 
}


// print linked list
void printl(Node* head){
    Node* temp = head;
    cout << "Linked List is: " << endl;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};


//head = NULL;
int main(int argc, const char * argv[]) {
    head = NULL;

    Node* temp = new Node;
    temp->data = 2;
    temp->next = NULL;
    head = temp;
    
    temp = new Node;
    temp->data = 4;
    temp->next = NULL;
    
    // traverse the whole list to the last node
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = temp;
    
    // print the result
    printl(head);
    int num = 8;
    head = insert0(head, num);          // question about pointer and reference
    
    
    printl(head);
    
    
    return 0;
}
