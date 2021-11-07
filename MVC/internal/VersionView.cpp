//
// Created by savicuser on 2021/10/18.
//

#include "VersionView.h"


void VersionView::update(void *a)
{
    cout<<static_cast<Model*>(a)->getVersion_Caption();
    cout<<static_cast<Model*>(a)->getVersion();
    cout<<endl;
}