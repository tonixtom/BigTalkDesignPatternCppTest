//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_TITLEVIEW_H
#define MVC_TEST_TITLEVIEW_H

#include <iostream>
#include "Observer.h"
#include "Model.h"

using namespace std;

//class TitleView, specialized Observer
class TitleView: public Observer
{
public:
    virtual void update(void* a) override;
};

#endif //MVC_TEST_TITLEVIEW_H
