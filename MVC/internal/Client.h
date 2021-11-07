//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_CLIENT_H
#define MVC_TEST_CLIENT_H
#include "Model.h"
#include "View.h"
#include "Controller.h"

//class Application, get Model, Views and Controller together
class Client
{
public:
    Client()
    {
        views.setModel(model);
        controller.setModel(model);
        model.notifyObservers();
    }
    void run(){controller.MessageLoop();}

private:
    Model model;
    Views views;
    Controller controller;
};

#endif //MVC_TEST_CLIENT_H
