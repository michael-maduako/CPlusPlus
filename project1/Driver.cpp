/**************************************************************
 * File:    Driver.cpp
 * Project: CMSC 341 - Project 1
 * Author : Michael Maduako
 * Date   : 28-February-2016
 * Section: 
 * E-mail:  maduako1@umbc.edu
 *
 * Sample driver file for project 1.
 *
 *************************************************************/


#include "Stack341.h"
#include "Queue341.h"
#include "MyExceptions.h"

int main(int argc, char *argv[]) {
    
    
    Stack341<int> *myStack = new Stack341<int>(); //stack container
    Queue341<int> myQueue; //queue container
    

    int ans; //data added to list
    string response; 

    try{
        
        cout << "Do you want to add data to a list? (yes/no) "; 
        cin >> response;

        while(response != "no" )
        {
            cout << "Would you like to implement a queue or stack? ";//allows you to
            cin >> response;                                         //edit stack or queue
            try{
                if(response == "queue")
                {
                    cout << "Would you like to push or pop? ";
                    cin >> response;
                    if(response == "push")
                    {
                        cout << "Enter number to push on: ";
                        cin >> ans;
                        myQueue.Push(ans);
                        
                        cout << "The first value is: " << myQueue.Back() << endl; //displays oldest value
                    }
                    else if(response == "pop")
                    {
		      if(myQueue.Size() == 0)
			throw Exceptions341("There's nothing to pop!");//Tests to prevent seg fault
		      else{
			myQueue.Pop();
		      }
		                                      
                       
                    }
                    else
                        cout << "That's not an option! " << endl;
                }
                else if(response == "stack")
                {
                    cout << "Would you like to push or pop? ";
                    cin >> response;
                    if(response == "push")
                    {
                        cout << "Enter number to push on: ";
                        cin >> ans;
                        myStack->Push(ans);
                        cout << myStack->Top() << endl;
                    }
                    else if(response == "pop")
                    {   
                        if(myStack->Size() == 0)
                            throw Exceptions341("There's nothing to pop!");
                        else{
			  myStack->Pop(); //Pops the result
                        }
                    }
                    else
                        cout << "That's not an option! " << endl;
                }
                else
                    cout << "That response is not correct! " << endl;

                }
                catch(Exceptions341 &E)
                {
                    cout << "Exception caught!: " << E.GetMessage() << endl;
                }

            cout << "Would you like to continue? (yes/no) ";
            cin >> response;


        }
        
        
    }
    catch(Exceptions341 &E)
    {
     cout << "Exception: " << E.GetMessage() << endl;       
    }
    
    // delete myStack;
    
    return 0;
}
