
/* 
 * File:   TicTacToe.h
 * Author: Michael Maduako
 *
 * Created on March 15, 2016, 1:21 AM
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "TicTacNode.h"
#include <map>

class TicTacToe: public TicTacNode{
public:
    
    TicTacToe();
    ~TicTacToe();

    void readGame(string filename);

    bool getIsOver(); //Determines if the game is over

    void getResults(); //Displays the winner of that match

    
    
    
    
private:
    TicTacNode* m_head;
    TicTacNode* currentBoard;
    //TicTacNode* m_tail;
    string m_filename;

    vector<map<unsigned int,string> > game;
    bool m_isOver;
    int m_results;

    
};



#endif /* TICTACTOE_H */

