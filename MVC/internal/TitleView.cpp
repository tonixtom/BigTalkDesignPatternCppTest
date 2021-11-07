//
// Created by savicuser on 2021/10/18.
//
#include "TitleView.h"

void TitleView::update(void *a)
{
    cout<<static_cast<Model*>(a)->getTitle_Caption();
    cout<<static_cast<Model*>(a)->getTitle();
    cout<<endl;
}