/*******************************************
 ** File: Node341.h 
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 **
 ** 
 **     This is the header file for the node class. This class will create the 
 ** objects used to store the data and set the pointers needed to traverse the 
 ** linked list
 **
 *******************************************/



#ifndef NODE341_H_
#define NODE341_H_

#include <iostream>
using namespace std;


template<class T>
class Stack341;

template<class T>
class Queue341;

template<class T>
class List341;

template<class T>
class Node341{
public:
   /**********************************************************************
   * Name: Node341 (Constructor)
   * PreCondition: None
   *
   * PostCondition:  Creates a node
   *********************************************************************/
     Node341();


    /**********************************************************************
    * Name: ~Node341 (Destructor)
    * PreCondition: None
    *
    * PostCondition:  Deletes a node
    *********************************************************************/
     //    ~Node341();


   /*
*/
private:
    T data; //data member of node
    Node341<T>* prev; //previous node
    Node341<T>* next; //next node

    friend class List341<T>;
    friend class Queue341<T>;
    friend class Stack341<T>;
};

#include "Node341.cpp"

#endif
