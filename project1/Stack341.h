/*******************************************************************************
 ** File: Stack341.h 
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 ** 
 **     This is the header file for the Stack class. This  
 **  file inherits from Lit341 and will use templates to store any type of data
 **  into a linked list through a push and pop the data. Also, this file 
 **  can display the top item in the list through pop
 ** 
 ** 
 ** 
 **  
 ******************************************************************************/


#ifndef STACK341_H_
#define STACK341_H_

#include <iostream>
#include "Node341.h"
#include "List341.h"
#include "MyExceptions.h"

using namespace std;

template<class T>

class Stack341 : public List341<T> {
public:
    /**********************************************************************
    * Name: Stack341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    Stack341();

    /**********************************************************************
    * Name: ~Stack341 (Destructor)
    * PreCondition: None
    *
    * PostCondition:  Deletes a node
    *********************************************************************/
    ~Stack341();

    /**********************************************************************
    * Name: Size
    * PreCondition: None
    *
    * PostCondition:  Returns size of list
    *********************************************************************/
    int Size() const;

    /**********************************************************************
    * Name: Empty
    * PreCondition: None
    *
    * PostCondition:  Returns true if list is empty or false if not
    *********************************************************************/
    bool Empty() const;

    /**********************************************************************
    * Name: Push(T obj)
    * PreCondition: None
    *
    * PostCondition:  Adds a node to end of list
    *********************************************************************/
    bool Push(T obj);

    /**********************************************************************
    * Name: Pop
    * PreCondition: A template object
    *
    * PostCondition:  Removes node from end of list
    *********************************************************************/
    bool Pop();

    /**********************************************************************
    * Name: Clear
    * PreCondition: None
    *
    * PostCondition:  Deletes all nodes in list
    *********************************************************************/
    bool Clear();

    /**********************************************************************
    * Name: Top
    * PreCondition: None
    *
    * PostCondition:  Returns last item added to stack
    *********************************************************************/
    T Top(); // Returns the top item on the stack


private:
    Node341<T>* stackTemp;
    int size;
    Node341<T>* head; //first node
    Node341<T>* tail; //last node
};


#include "Stack341.cpp"

#endif



