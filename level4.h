//
// Created by XUEGUANG MA on 2017-12-02.
//
#include "level.h"
#ifndef FINAL_LEVEL4_H
#define FINAL_LEVEL4_H
class Level4 : public Level{
    int callnum;
public:
    Level4();
    char generateType(std::string f) override ;
};
#endif //FINAL_LEVEL4_H


