#ifndef VISITOR_H
#define VISTTOR_H

#include "Element.h"

class Action
{
public:
    virtual void GetManConclusion(Person* concreteElementA){};
    virtual void GetWomanConclusion(Person* concreteElementB){};
};

class Success:public Action
{
public:
    void GetManConclusion(Person* concreteElementA);
    void GetWomanConclusion(Person* concreteElementB);
};

class Failing:public Action
{
public:
    void GetManConclusion(Person* concreteElementA);
    void GetWomanConclusion(Person* concreteElementB);
};

class Amativeness:public Action
{
public:
    void GetManConclusion(Person* concreteElementA);
    void GetWomanConclusion(Person* concreteElementB);
};

#endif