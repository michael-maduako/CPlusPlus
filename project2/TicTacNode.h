/************************************************************ 
 * File:   TicTacNode.h
 * Author: Michael Maduako
 *
 * Created on March 15, 2016, 1:21 AM
 **********************************************************/
#ifndef TICTACNODE_H
#define TICTACNODE_H


#include <iostream>
#include <vector>
#include <map>
using namespace std;


class TicTacNode{
    
public:
    TicTacNode();
    TicTacNode(map<unsigned int, string>);
    TicTacNode(string);
    ~TicTacNode();
    
    
    friend bool operator==(const TicTacNode& lhs, const TicTacNode& rhs);
    
    TicTacNode& operator=(const TicTacNode& T);
    friend ostream& operator<<(ostream& sout, const TicTacNode& T);
    


private:

    vector<TicTacNode*> m_children;
    string m_filename;
 
    map<unsigned int,string> m_board;
    map<unsigned int,string> data;

    friend class TicTacToe;
    friend class TicTacTrie;
    
    
};


#endif /* TICTACNODE_H */

