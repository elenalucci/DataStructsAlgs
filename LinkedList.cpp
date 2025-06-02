#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    Node* current = head;

    while(current !=nullptr){
        Node* next = current->next;
        std::cout<< "Deleting node with value: " << current->data << std::endl;
        delete current;
        current = next;
    }
    std::cout<< "All nodes cleared." << std::endl;
}

void LinkedList::append(int value){
    Node* newNode = new Node{value, nullptr};

    if(head == nullptr){
        head = newNode;
    } else {
        Node* current = head;

        while(current->next !=nullptr){
            current = current->next;
        }

        current->next = newNode;
    }

}

void LinkedList::deleteValue(int value){
    //empty list
    if(head == nullptr){
        return;
    }

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while(current->next != nullptr && current->next->data != value){
        current = current->next;
    }

    if(current->next != nullptr){
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

}

void LinkedList::print() const{
    Node* current = head;
    while(current != nullptr){
        std::cout << current->data << "->";
        current = current->next;
    }
    std::cout << std::endl << std::endl;
}

void LinkedList::run(){
    std::cout<<"running linked list"<< std::endl;
    int selection;
    do{
        std::cout<< "Select an option: " << std::endl;
        std::cout<< "1.) Add a node" << std::endl;
        std::cout<< "2.) Delete a node " << std::endl;
        std::cout<< "3.) Print" << std::endl;
        std::cout<< "4.) Back" << std::endl;

        std::cin>> selection;

        if(selection == 1){
            int value;
            std::cout<<"Enter a value to add to list: ";
            std::cin>> value;
            std::cout<<std::endl;
            append(value);
        }
        else if(selection == 2){
            int value;
            std::cout<< "Enter the value you want to delete: ";
            std::cin>>value;
            std::cout<<std::endl;
            deleteValue(value);

        }else if(selection == 3){
            std::cout<<"Printing Linked List"<< std::endl << std::endl;
            print();
        }
        else if(selection == 4){
            break;
        }else{
            std::cout<<"Invalid Option" << std::endl;
        }

    }while(selection !=4);

}