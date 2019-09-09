//
// Created by XUEGUANG MA on 2017-12-01.
//
#include "level.h"
#ifndef FINAL_LEVEL3_H
#define FINAL_LEVEL3_H

class Level3 : public Level{
    int callnum;
public:
    Level3();
    char generateType(std::string f) override ;
};

#endif //FINAL_LEVEL3_H


