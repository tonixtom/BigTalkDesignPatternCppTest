//
// Created by savicuser on 2021/10/18.
//

#include "CreditsView.h"


void CreditsView::update(void *a)
{
    cout<<static_cast<Model *>(a)->getCredits_Caption();
    cout<<static_cast<Model *>(a)->getCredits();
    cout<<endl;
}
