//
// Created by XUEGUANG MA on 2017-11-25.
//

#ifndef FINAL_BOARD_H
#define FINAL_BOARD_H

#include <vector>
#include "cell.h"
#include "state.h"
#include <cstddef>
#include <string>
#include "graphicsdisplay.h"
#include "textdisplay.h"
#include <memory>
#include "block.h"
#include "level.h"
#include "score.h"


#undef None

class Block;
class Observer;
class Level;
class Score;


class Board {
    int token=3;
    bool gameover=0;
    std::string filename;
    bool textonly=0;
    std::shared_ptr<Level> level;
    std::shared_ptr<Score> score;
    std::shared_ptr<Block> curBlock;
    std::shared_ptr<Block> nextBlock;
    int counter=0;
    std::vector<std::vector<Cell>> theBoard;
    std::vector<std::shared_ptr<Block>> onBoardBlocks;
    std::shared_ptr<Observer> ob;
    std::shared_ptr<Observer> td;
    bool isFull(int rowToCheck);
    int seeDownwards(std::shared_ptr<Block>  blockptr);
    void cleanLine(int rowToClean);
    int check(std::shared_ptr<Block> blockptr);
    void keepDown();
    bool aboveOrOnRow(int row,std::shared_ptr<Block>  blockptr);
    bool gameOver();
public:
    void initBoard(bool textflag);
    void setFile(std::string);
    void setLevel(int n);
    void setScore();
    int getLevel();
    void genernateBlock();
    void genernateNextBlock();
    void drawBlock();
    void setBlock();
    void deleteBlock();
    void cleanBoard();
    void drawBoard();
    void cleanBlock();
    void goRight();
    void goLeft();
    void drop();
    void goDown();
    void redrawScoreWindow();
    void redrawNext();
    void rotateBlock();
    void counterRotateBlock();
    void levelUp();
    void levelDown();
    void restart();
    void changeCurrent(char blockType);
    void useToken();
    friend std::ostream &operator<<(std::ostream &out,  Board &b);
};



#endif //FINAL_BOARD_H



