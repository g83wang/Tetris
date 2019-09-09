//
// Created by XUEGUANG MA on 2017-11-23.
//

#ifndef FINAL_SUBJECT_H
#define FINAL_SUBJECT_H

#include "info.h"
#include <vector>
#include <memory>
#include "observer.h"

class Observer;

class Subject{
    std::vector<std::shared_ptr<Observer>> observers;
public:
    void attach(std::shared_ptr<Observer> o);
    void notifyObservers();
    virtual Info getInfo() const = 0;
};

#endif //FINAL_SUBJECT_H


