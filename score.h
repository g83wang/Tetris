//
// Created by XUEGUANG MA on 2017-11-29.
//

#ifndef FINAL_SCORE_H
#define FINAL_SCORE_H
class Score{
    int curScore=0;
    int hiScore=0;
public:
    int getCurScore();
    int getHiScore();
    void setHiScore(int newHiScore);
    void resetCurScore();
    void addScore(int scoreToAdd);
};


#endif //FINAL_SCORE_H


