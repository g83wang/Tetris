#ifndef GRAPHICSDISPLAY_H
#define GRAPHICSDISPLAY_H
#include <iostream>
#include <vector>
#include "observer.h"
#include "state.h"
#include "window.h"
#include "info.h"

class Cell;

class GraphicsDisplay: public Observer {
    const int winSize;
    Xwindow xw;
public:
    GraphicsDisplay(int winSize=500);
    void notify(Subject &whoNotified) override;
    void redrawScoreWindow(int level, int score, int hiscore,int token, bool status);
    void redrawNext(std::vector<Position> theblock, Colour colour);
};


#endif


