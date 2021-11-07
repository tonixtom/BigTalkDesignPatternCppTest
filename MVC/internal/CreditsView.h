//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_CREDITSVIEW_H
#define MVC_TEST_CREDITSVIEW_H

#include <iostream>
#include "Observer.h"
#include "Model.h"

using namespace std;
//class CreditsView, specialized Observer
class CreditsView:public Observer
{
    virtual void update(void* a) override;
};

#endif //MVC_TEST_CREDITSVIEW_H
