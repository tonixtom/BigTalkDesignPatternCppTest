//
// Created by savicuser on 2021/10/18.
//
#include "Controller.h"

void Controller::MessageLoop()
{
    char c=' ';
    string s;
    while(c!='q')
    {
        cin>>c;
        cin.ignore(256,'\n');
        cin.clear();
        switch(c)
        {
            case 'c':
            case 't':
            case 'v':
                getline(cin,s);
                break;
        }
        switch(c)
        {
            case 'c':model->setCredits(s);break;
            case 't':model->setTitle(s);break;
            case 'v':model->setVersion(s);break;
        }
    }
}


void Controller::setModel(Model & a) {
    this->model = &a;
}
