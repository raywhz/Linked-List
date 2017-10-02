//
//  02 Linked List Insert.cpp
//  data structure
//
//  Created by Haozhou Wu on 9/22/17.
//  Copyright © 2017 Haozhou Wu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// global variable should be declare after include, but before all code!
struct Node* head;


struct Node{
    int data;
    Node* next;
};

void insert0(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head!=NULL)
        temp->next = head;
    head = temp;

};

void printlist(Node* head){
    cout << "Linked list is: " << endl;
    Node* temp;
    temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};



int main(){
    head = NULL;
    int n;
    cout << "How many numbers in the linked list?"<<endl;
    cin >> n;
    
    int num;
    for(int i = 0; i < n; i++){
        cout << "input the number" << endl;
        cin >> num;
        insert0(num);
        printlist(head);
        
    }
    return 0;
}






