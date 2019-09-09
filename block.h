//
// Created by XUEGUANG MA on 2017-11-23.
//
#include <vector>
#include <iostream>
#include "state.h"
#include "score.h"
#include <memory>
#ifndef FINAL_BLOCK_H
#define FINAL_BLOCK_H
#undef None

class Block {
    int RootColumn=0;
    int RootRow=3;
    int levelScore=0;
    bool isAdjacent(Position p1, Position p2);
protected:
    Colour colour=Colour::None;
    std::vector<Position> CellsPositions;
public:
    ~Block()= default;
    virtual void initBlock()=0;
    std::vector<Position> getCellsPositions();
    void goRight();
    void goLeft();
    void goDown(int n);
    Colour getColour();
    void setScore(int n);
    int getScore();
    void removeRow(int n,std::shared_ptr<Score> scoreptr);
    void rotate();
    std::vector<Position> fakeRotate();
    std::vector<Position> fakeCounterRotate();
    void counterRotate();
    void keepDown(int n);
    bool isBreaked();
    friend std::ostream &operator<<(std::ostream &out,  Block &block);
};


#endif //FINAL_BLOCK_H



