//
//  main.cpp
//  LinkedLists
//
//  Created by Satyajit Ghana on 08/09/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#include <iostream>
#include "stacks.h"
#include "queue.h"
using namespace std;

int main(int argc, const char * argv[]) {
    char choice;
    cout<<"MAIN MENU";
    cout<<"\n1.Stacks";
    cout<<"\n2.Queues";
    cout<<"\nEnter your choice : "; cin>>choice;
    switch(choice) {
        case '1' : cout<<"\nSTACKS\n"; stacks(); break;
        case '2' : cout<<"\nQUEUE\n";  queue(); break;
        default: cout<<"\nWrong Choice. Good Bye !";
    }
    return 0;
}