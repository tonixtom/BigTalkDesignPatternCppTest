#include <iostream>
#include "Object.h"
#include "Resume.h"


int main(void){
    Resume *a,*b;

    a = new Resume();
    a->setWorkExperience("Ton");
    a->setPersonalInfo("tom");

    b  = ( Resume* )a->clone();


    b->setWorkExperience("HH");
    b->setPersonalInfo("who");

    a->display();
    b->display();

    //浅克隆比较
    cout << "a == b?" << endl;
    cout << (a==b) << endl;
    cout << "Resume.getWorkExperience == copyResume.getWorkExperience?" << endl;
    cout << (a->getWorkExperience()==b->getWorkExperience()) << endl;

    return 0;
}