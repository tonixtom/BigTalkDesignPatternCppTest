//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_MODEL_H
#define MVC_TEST_MODEL_H

#include <iostream>
#include <string>
#include "Observer.h"
#include "Observable.h"

using namespace std;

class Model: public Observable
{
public:
    //conclassor
    Model() :
            title_caption("Title: "),
            version_caption("Version: "),
            credits_caption("Credits: "),
            title("Simple Model-View-Controller Implementation"),
            version("0.2"),
            credits("(put your name here)")
    { }

    //getCredits_Caption, getTitle_Caption, getVersion_Caption
    string getCredits_Caption(){return credits_caption;}
    string getTitle_Caption(){return title_caption;}
    string getVersion_Caption(){return version_caption;}

    //getCredits, getTitle, getVersion
    string getCredits(){return credits;}
    string getTitle(){return title;}
    string getVersion(){return version;}

    //setCredits, setTitle, setVersion
    void setCredits(string a){credits=a;notifyObservers();}
    void setTitle(string a){title=a;notifyObservers();}
    void setVersion(string a){version=a;notifyObservers();}

private:
    //data members title_caption, version_caption, credits_caption
    string title_caption;
    string version_caption;
    string credits_caption;

    //data members title, version, credits
    string title;
    string version;
    string credits;
};
#endif //MVC_TEST_MODEL_H
