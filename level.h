#include <string>
#ifndef UNTITLED2_LEVEL_H
#define UNTITLED2_LEVEL_H
class Level{
    int lev;
public:
    Level(int n);
    ~Level()= default;
    int getLevel();
    virtual char generateType(std::string f) =0;
};


#endif //UNTITLED2_LEVEL_H



