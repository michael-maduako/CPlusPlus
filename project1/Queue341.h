/*******************************************
 ** File: Queue341.h 
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 **
 **     This is the queue header file. This file inherits form List341 and 
 ** will store data into the linked list and pop the data out similarly to the 
 ** stack class. 
 **
 *******************************************/






#ifndef QUEUE341_H_
#define QUEUE341_H_
#include "Node341.h"
#include "List341.h"
#include "MyExceptions.h"

template <class T>

class Queue341: public List341<T> {
public:
    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    Queue341();

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    ~Queue341();

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    int Size() const;

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    bool Empty() const;

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    bool Push(T obj);

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    bool Pop();

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    bool Clear();

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    T Front(); //Returns the item at the front of the queue

    /**********************************************************************
    * Name: Node341 (Constructor)
    * PreCondition: None
    *
    * PostCondition:  Creates a node
    *********************************************************************/
    T Back(); //Returns the item at the back of the queue

private:
    Node341<T>* queueTemp;
    int size;
    Node341<T>* head; //first node
    Node341<T>* tail; //last nod

};







#include "Queue341.cpp"


#endif



