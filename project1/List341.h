/*******************************************
 ** File: List341.h 
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 **
 **     This is the header file for the list class. This
 **  file is an abstract class which contains pure virtual functions 
 **  that will only be defined in the stack and queue classes. 
 **
 *******************************************/



#ifndef LIST341_H_
#define LIST341_H_

#include "Node341.h"


template <class T>

class List341{
public:
     /**********************************************************************
    * Name: List341 (Constructor)
    * PreCondition: none
    *
    * PostCondition:  Creates a list
    *********************************************************************/
    List341();// class constructor

    /**********************************************************************
   * Name: ~List341 (Destructor)
   * PreCondition: none
   *
   * PostCondition:  Deletes a list
   *********************************************************************/
    //    ~List341(); //class destructor

    /**********************************************************************
   * Name: Size()
   * PreCondition: none
   *
   * PostCondition:  returns amount of nodes in the list
   *********************************************************************/
    virtual int Size() const = 0; //Returns the size of a list

    /**********************************************************************
   * Name: Empty()
   * PreCondition: none
   *
   * PostCondition: Tells whether a list has any nodes or not
   *********************************************************************/
    virtual bool Empty() const = 0; //Returns whether a list has data or not

    /**********************************************************************
   * Name: Push(T obj)
   * PreCondition: Object of type template
   *
   * PostCondition
     * :  Adds data to the list
   *********************************************************************/
    virtual bool Push(T obj) = 0; //Pushes data into the list

    /**********************************************************************
   * Name: Pop()
   * PreCondition: none
   *
   * PostCondition:  removes data form a list
   *********************************************************************/
    virtual bool Pop() = 0; //Pops data from a list

    /**********************************************************************
   * Name: Clear()
   * PreCondition: String containing error description.
   *
   * PostCondition:  deletes every node in the list
   *********************************************************************/
    virtual bool Clear() = 0; //Clears a list
 


};


#include "List341.cpp"


#endif
