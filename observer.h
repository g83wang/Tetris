//
// Created by XUEGUANG MA on 2017-11-23.
//

#ifndef FINAL_OBSERVER_H
#define FINAL_OBSERVER_H
class Subject;
class Cell;

class Observer{
public:
    virtual void notify(Subject & whoFrom)=0;
    virtual ~Observer() = default;
};

#endif //FINAL_OBSERVER_H



