//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_CONTROLLER_H
#define MVC_TEST_CONTROLLER_H
#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

//class Controller, wait for keystroke and change Model
class Controller
{
public:
    //setModel
    void setModel(Model& a);
    //MessageLoop
    void MessageLoop();

private:
    //data member model
    Model *model;
};


#endif //MVC_TEST_CONTROLLER_H
