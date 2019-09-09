

#ifndef FINAL_CELL_H
#define FINAL_CELL_H
#include "subject.h"
#include "info.h"
#include "state.h"

class Cell : public Subject {
    int row;
    int column;
    Colour colour;
public:
    Cell(int r, int c, Colour colour=Colour::None);
    Info getInfo() const override;
    void setColour(Colour colour);
};



#endif //FINAL_CELL_H


