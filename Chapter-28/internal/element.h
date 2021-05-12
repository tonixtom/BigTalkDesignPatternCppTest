#ifndef ELEMENT_H
#define ELEMENT_H

class Action;

class Person
{
public:
    virtual void Accept(Action* visitor){};
};

class Man:public Person
{
    void Accept(Action* visitor);
};

class Woman:public Person
{
    virtual  void Accept(Action* visitor) override;
};

#endif