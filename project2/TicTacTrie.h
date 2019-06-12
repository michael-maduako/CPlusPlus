
/* 
 * File:   TicTacTrie.h
 * Author: mboy4_000
 *
 * Created on March 15, 2016, 1:21 AM
 */

#ifndef TICTACTRIE_H
#define TICTACTRIE_H

#include "TicTacToe.h"

class TicTacTrie{
public:
    
    TicTacTrie();
    
    void addGame(TicTacToe t);
    

private:
    int m_xWins;
    int m_oWins;
    int m_draws;
    int m_size;
    
    
    
    
};

#endif /* TICTACTRIE_H */

