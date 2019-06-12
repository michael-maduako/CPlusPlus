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
//#include "TicTacToe.h"

TicTacNode::TicTacNode()
{

}

TicTacNode::TicTacNode(map<unsigned int,string> board)
:m_board(board), data(m_board)

{

}


TicTacNode::TicTacNode(string filename)
{
  m_filename = filename;

}



TicTacNode::~TicTacNode()
{
    m_board.clear();
}



bool operator==(const TicTacNode& lhs, const TicTacNode& rhs)
{

 
  for(unsigned int i = 0; i < lhs.m_board.size(); i++){
    if(!(lhs.m_board.at(i) == rhs.m_board.at(i)))
      {
	return false;
      }

  }
  return true;
  
    

}

TicTacNode& TicTacNode:: operator=(const TicTacNode& T)
{
  
  m_children = T.m_children;
  m_board = T.m_board;
  data = T.data;

  return *this;
}



ostream& operator<<(ostream& sout, const TicTacNode& T)
{

  /* 
    for(int i = 0; i < T.m_board.size(); i++)
    {
      sout << T.m_board[i] << " " ;
    }
   
  */
  sout << "====================================\n" << "Reading: "
       << T.m_filename <<"\n=================================" 
    // <<  T.getResults << "\nGame Board: \n" 
    // << T.m_board[0]
       << "\n \n ========================================="; 



  return sout;
}
 
