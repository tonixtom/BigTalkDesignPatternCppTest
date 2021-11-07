//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_OBSERVABLE_H
#define MVC_TEST_OBSERVABLE_H

#include <vector>
#include "Observer.h"

using namespace std;
//这样可以大大提高View的可重复使用性
class Observable
{
public:
    void addObserver(Observer* a){observers.push_back(a);}
    void notifyObservers()
    {
        for(vector<Observer *>::const_iterator observer_iterator=observers.begin(); observer_iterator!=observers.end(); observer_iterator++)
            (*observer_iterator)->update(this);
    }

private:
    //observers
    vector<Observer *> observers;
};

#endif //MVC_TEST_OBSERVABLE_H
