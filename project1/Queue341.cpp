 
/** File: Queue341.cpp
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 **
 **     This is the queue implementation file. This file will 
 ** add data to a list through the push function, and it will pop the data by 
 ** removing the first item entered into the list, like a line in a grocery 
 ** store
 **
 ********************************/



#ifndef QUEUE341_CPP_
#define QUEUE341_CPP_

#include "Queue341.h"


//Queue
//Sets all nodes to null and the size to 0
template<class T>
Queue341<T>::Queue341()
:queueTemp(NULL), size(0), head(new Node341<T>()), tail(new Node341<T>())
{
}


template <class T>
Queue341<T>::~Queue341()
{
    Node341<T> *tempNode;
    tempNode = head;
    head = head->next;
    delete tempNode;
    return;

}


//Size
//Returns the amount of nodes in the queue list
template<class T>
int Queue341<T>::Size() const {
    return size;

}

//Empty
//Returns true if the list is empty
template<class T>
bool Queue341<T>::Empty() const {
    return (head->next == tail);

}
//Push
//Adds the data to the list
template <class T>
bool Queue341<T>::Push(T obj) {

    queueTemp = new Node341<T>();
    queueTemp->data = obj;

    if(head == NULL)
    {
        head = queueTemp;
        tail = queueTemp;

   
    }
    else {
        queueTemp->next = head;
        head->prev = queueTemp;

        head = queueTemp;
    }

    size++;
    return true;
}

//Pop
//Removes the first node in the list
template<class T>
bool Queue341<T>::Pop() {
    if(tail != NULL) {
        queueTemp = tail;
        tail = queueTemp->prev;
        queueTemp = NULL;

        size--;
        return true;
        
        
    }
    else {
        cout << "The list is empty! Cannot pop!" << endl;
        return false;
    }
}

//Clear
//Empties the list
template<class T>
bool Queue341<T>::Clear() {
    if(head != NULL){
        while(head != NULL){
            delete head;
        }
        size = 0;
        return true;
    }
    else
        return false;
}


//Front
//Displays the latest node

template<class T>
T Queue341<T>::Front() {
    return tail->data; //returns the first node in the list
}

//Back
//Displays the node added the earliest
template<class T>
T Queue341<T>::Back() {
    return head->data; //returns the last node in the list
}

#endif
