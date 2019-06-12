/*****************************************
 ** File:    Driver.cpp
 ** Project: CMSC 341 Project 341
 ** Author:  Michael Maduako
 ** Date:    3/20/16
 ** Section: 04
 ** E-mail:  maduako1@umbc.edu 
 **
 ** 
 ** This program reads a file of files and opens each tic tac toe 
 ** game in order to be read and find a winner
 **
 ***********************************************/
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <fstream>
#include "TicTacNode.h"
#include "TicTacToe.h"
#include "TicTacTrie.h"

using namespace std;


void readFromFile(string file);

int main(int argc, char *argv[]) {

    string file1 = "testfilenames.txt";

    readFromFile(file1);
  

    
    
    return 0;
}


void readFromFile(string file)
{
    string openfile;
    ifstream infile;
    TicTacToe* readFile;

    infile.open(file.c_str(), ios_base::in);
    


    if(infile.fail())
    {
        cout << "The File was not successfully opened. " << endl;
        exit(1); // ends ENTIRE program!!!
    }

 

    while(infile >> openfile)
    {

      //getline(infile,openfile);
        readFile->readGame(openfile); //reads a game from the file and records its results

	cout << openfile << "\n" << endl;
    }



}
