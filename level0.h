//
// Created by XUEGUANG MA on 2017-12-03.
//
#include "level.h"
#include <string>
#ifndef FINAL_LEVEL0_H
#define FINAL_LEVEL0_H
class Level0 : public Level{
    int callnum=0;
public:
    Level0();
    char generateType(std::string f) override ;
};

#endif //FINAL_LEVEL0_H



