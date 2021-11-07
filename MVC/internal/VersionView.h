//
// Created by savicuser on 2021/10/18.
//

#ifndef MVC_TEST_VERSIONVIEW_H
#define MVC_TEST_VERSIONVIEW_H

#include <iostream>
#include "Observer.h"
#include "Model.h"

using namespace std;
//class VersionView, specialized Observer
class VersionView: public Observer
{
    virtual void update(void* a) override;
};

#endif //MVC_TEST_VERSIONVIEW_H
