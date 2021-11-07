//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_VIEW_H
#define MVC_TEST_VIEW_H

#include <iostream>
#include "Observable.h"
#include "Observer.h"
#include "TitleView.h"
#include "VersionView.h"
#include "CreditsView.h"

using namespace std;


//构造视图，将所有观察者打包到另一个观察者中
class Views: public Observer
{
public:
    //setModel
    void setModel(Observable &a)
    {
        a.addObserver(&titleview);
        a.addObserver(&versionview);
        a.addObserver(&creditsview);
        a.addObserver(this);
    }
    //update
    virtual void update(void* a) override;

private:
    //data members titleview, versionview, creditsview
    TitleView titleview;
    VersionView versionview;
    CreditsView creditsview;
};

#endif //MVC_TEST_VIEW_H
