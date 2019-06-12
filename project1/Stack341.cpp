 
/** File: Stack341.cpp
 ** Project: Project1
 ** Author: Michael Maduako
 ** Date: 2/28/16
 ** Section: 04 
 ** E-mail: maduako1@umbc.edu
 **
 **     This is the Stack implementation file. This file will push the 
 ** data into the list and pop the data out by displaying the last item 
 ** entered into the list, then removing said item until the list becomes empty 
 ** again.
 **
 ***************************************/

#ifndef STACK341_CPP_
#define STACK341_CPP_


#include "Stack341.h"

//Stack341
//Initializes all of stacks variables
template<class T>
Stack341<T>::Stack341()
:stackTemp(new Node341<T>()), size(0), head(new Node341<T>()), tail(new Node341<T>())
{
}

//Destructor
//Deletes nodes
template<class T>
Stack341<T>::~Stack341() {
    Node341<T> *tempNode;
    tempNode = head;
    head = head->next;
    delete tempNode;
    return;
}


//Size
//Returns the amount of elements in the Stacked list
template<class T>
int Stack341<T>::Size() const {
    return size;

}

//Empty
//Determines if the list is empty
template<class T>
bool Stack341<T>::Empty() const {
    return head==NULL;

}

//Push
//Given value to add, returns true if successfully added
template<class T>
bool Stack341<T>::Push(T obj)
{
    stackTemp = new Node341<T>();
    stackTemp->data = obj;

    if(head == NULL)
    {
        head = stackTemp;
        tail = stackTemp;

	size++;
       return true;
    }
    else {
	stackTemp->next = head;
        head->prev = stackTemp;

        head = stackTemp;
	size++;
	return true;
    }

}

//Pop
//Removes the last item added to the list
template<class T>
bool Stack341<T>::Pop() {
    if(head != NULL)
    {
        stackTemp = head;
        head = stackTemp->next; //Adds the temp node to the sequence
        //head->prev = NULL;
        stackTemp = NULL; //remove node form the list
        
        size--;
        return true;

    }
    else{
        cout << "The list is empty! Cannot pop!" << endl;
        return false;
    }


}

//Clear
//Resets the size and sets the head to NULL
template<class T>
bool Stack341<T>::Clear() {
    
   if(head != NULL){
        while(head != NULL){
            stackTemp = head;
            head = stackTemp->next;
            delete stackTemp;
        }
        size = 0;
        return true;
    }
    else
        return false;

}

//Top
//Returns the last item added in the list
template<class T>
T Stack341<T>::Top() {

    return head->data;


}

#endif
