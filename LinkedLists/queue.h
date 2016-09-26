//
//  queue.h
//  LinkedLists
//
//  Created by Satyajit Ghana on 26/09/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef queue_h
#define queue_h

using namespace std;

static int i=1;

struct queue {
    int data;
    queue *next;
}*front,*rear,*tmp,*p;

queue* newnode(int inf) {
    tmp=new queue;
    tmp->data=inf;
    tmp->next=NULL;
    return tmp;
}

void insert(queue *ptr) {
    if (front==NULL) {
        front=rear=ptr;
    }
    
    else  {
        rear->next=ptr;
        rear=ptr;
    }
}

void display(queue *n) {
    cout<<"FRONT - ";
    while (n!=NULL)
    {cout<<n->data<<" - "; n=n->next;} cout<<"REAR";
}

void destroy() {
    if (front==NULL) cout<<"\nUnderflow !";
    else {
        tmp=front;
        front=front->next;
        delete tmp;
    }
}

int queue()
{
    front=rear=NULL;
    char ch='y';
    while (ch=='y'||ch=='Y') {
        int inf;
        cout<<"Enter Information "<<i<<" : "; cin>>inf;
        p=newnode(inf);
        if (p==NULL) cerr<<"\nOverFlow!";
        else {insert(p); i++;}
        display(front);
        cout<<"\nDo you want to enter more elements ? (y/n) : "; cin>>ch;
    }cout<<"\n";
    ch='y';
    while (ch=='y'||ch=='Y') {
        cout<<"\nDo you want to delete an element ? (FIFO) : "; cin>>ch;
        if (ch=='y'||ch=='Y')
        destroy();
        cout<<"\nNow your Queue is : "; display(front);
    }
    return 0;
}

#endif /* queue_h */
