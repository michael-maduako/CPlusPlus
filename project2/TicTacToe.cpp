
/*****************************************
 ** File:    TicTacNode.cpp
 ** Project: CMSC 341 Project 2
 ** Author:  Michael Maduako
 ** Date:    3/20/16
 ** Section: 04
 ** E-mail:  maduako1@umbc.edu
 **
 **
 **
 **
 ***********************************************/

#include "TicTacNode.h"
#include "TicTacToe.h"
#include <fstream>
#include <cstdlib>
#include <string>

TicTacToe::TicTacToe()
  :m_isOver(false), m_results(0)
{

    if(m_head == NULL)
    {
        m_head = new TicTacNode(m_board);
        m_head->data = m_board;//Assigns the created map to a node
        //m_tail = m_head;
    }
    else {
        TicTacNode *temp = new TicTacNode();
        temp->data = m_board;
	m_head->m_children.push_back(temp); //puts all of m_heads children inside of a vector of nodes

    }



    //m_head->m_children.push_back(new TicTacNode(m_board));

}

TicTacToe::~TicTacToe()
{
    for(unsigned int i = 0; i < m_children.size(); i++)
      {
	delete m_children[i];
      }
    delete m_head;

}



void TicTacToe::readGame(string filename)
{
    map<unsigned int, string> yourTurn;//holds a single turn of the board
    vector<map<unsigned int, string> > fullGame; //holds a game(file) and stores in a vector of TicTacNodes


    //m_filename = filename;
    
   

    ifstream infile;
    char line;
    
    infile.open(filename.c_str(), ios_base::in);



    if(infile.fail())
    {
        cout << "The File: " << filename << " was not successfully opened." << endl;
        exit(1); // ends ENTIRE program!!!
    }

    
    unsigned int i = 0;
    int count = 0;
 
   
    while(infile >> line)
    {

      while(i <= 8)
      	{
	  
	  if(count <= 8)
	    {
	  
	      yourTurn[count] = line; //Adds either -, X or O to the map with a key of 0-8
	      i++;
	      count++;
	      
	    }
	  else
	    {
	     
	      currentBoard = new TicTacNode();
	      cout << "Debugging" << endl;
	      currentBoard->data = yourTurn;//Sets the completed map as a TicTacNode /***********************/
	      fullGame.push_back(yourTurn);//Adds the current board as one of the moves of the game
	      m_children.push_back(currentBoard);
	      count = 0; //Resets count so that in fullGames next index, the first game will be index 0
	      
	      
	    }
      
    }

    }
    game = fullGame;
    //m_isOver = true;
}





bool TicTacToe::getIsOver()
{
  
  return m_isOver;

}


void TicTacToe::getResults()
{

  map<unsigned int, string> finished_board = game.back();
  
  if((finished_board[0] == "X" &&  finished_board[1] == "X" &&  finished_board[2] == "X")||
     (finished_board[3] == "X" && finished_board[4] == "X" &&  finished_board[5] == "X")||
     (finished_board[6] == "X" && finished_board[7] == "X" &&  finished_board[8] == "X")||
     (finished_board[0] == "X" && finished_board[3] == "X" && finished_board[6] == "X" )||
     (finished_board[1] == "X" && finished_board[4] == "X" &&  finished_board[7] == "X")||
     (finished_board[2] == "X" && finished_board[5] == "X" && finished_board[8] == "X" )||
     (finished_board[0] == "X" && finished_board[4] == "X" && finished_board[8] == "X" )||
     (finished_board[2] == "X" && finished_board[4] == "X" && finished_board[6] == "X" ))
    {
      m_results = 1;

    }
  else if((finished_board[0] == "O" && finished_board[1] == "O" && finished_board[2] == "O") ||
	  (finished_board[3] == "O" && finished_board[4] == "O" &&  finished_board[5] == "O")||
	  (finished_board[6] == "O" && finished_board[7] == "O" && finished_board[8] == "O") ||
	  (finished_board[0] == "O" && finished_board[3] == "O" && finished_board[6] == "O") ||
	  (finished_board[1] == "O" && finished_board[4] == "O" && finished_board[7] == "O") ||
	  (finished_board[2] == "O" && finished_board[5] == "O" &&  finished_board[8] == "O")||
	  (finished_board[0] == "O" && finished_board[4] == "O" && finished_board[8] == "O") ||
	  (finished_board[2] == "O" && finished_board[4] == "O" && finished_board[6] == "O") )
    {
      
      m_results = 2;


    }
  else
    {

      m_results = 3;

    }




  
  if(m_results == 0)
    {
      cout << "The game isn't over yet!" << endl;
    }
  else if(m_results == 1)
    {
      cout << "Player X wins!" << endl;
      
      
    }
  else if(m_results == 2)
    {
      cout << "Player O wins!" << endl;


    }
  else if(m_results == 3)
    {
      cout << "The game ended in a draw. " << endl;


    }



}
