//
//  stacks.h
//  LinkedLists
//
//  Created by Satyajit Ghana on 08/09/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef stacks_h
#define stacks_h

using namespace std;

struct node {
    int data;
    node *next;
}*top,*newptr,*ptr;

static int no=1;

node* createnode(int i) {
    ptr= new node;
    ptr->data=i;
    ptr->next=NULL;
    return ptr;
}

void push(node* ptr) {
    no++;
    if (top==NULL) top=ptr;
    else {
        //Now we dont need a save pointer. I don't know why they used a *save. Maybe to confuse students ?
        
       /* save=top;
        top=ptr;
        ptr->next=save; */
        
        ptr->next=top;
        top=ptr;
    }
}

void pop() {
    if (top==NULL) { cout<<"\nStack UNDERFLOW !"; exit (-1); }
    else {
        ptr=top;
        top=top->next;
        delete ptr; }
}

void display(node* ptr) {
    while(ptr!=NULL) { cout<<ptr->data<<" "; ptr=ptr->next;} cout<<" END";
}

int stacks() {
    top=NULL;
    int info;
    char ch='y';
    while (ch=='y'||ch=='Y') {
        cout<<"\n\nEnter Data for Node "<<no<<" : "; cin>>info;
        newptr=createnode(info);
        if (ptr==NULL) { cout<<"\nError Occured !"; exit (-1); }
        else push(newptr);
        cout<<"Want to create more nodes ? (y/n) : "; cin>>ch;
        cout<<"Your Stack is "; display(top);
    }cout<<"\n";
    ch='y';
    while (ch=='y'||ch=='Y') {
        cout<<"\nWant to delete a node of your stack ? (y/n) : "; cin>>ch;
        if (ch=='y'||ch=='Y') {pop();display(top);}
    }
    
    cout<<"Your Stack is : "; display(top);
    return 0;
}


#endif /* stacks_h */
