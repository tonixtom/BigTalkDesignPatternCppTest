//
// Created by tom-zlw on 2021/4/12.
//

#ifndef C___LIST_RESUME_H
#define C___LIST_RESUME_H
#include <iostream>
#include "string"
#include "Object.h"
#include "WorkExperience.h"
//具体类Resume
class Resume : public Object{
public:

    Resume();
    Resume(WorkExperience work);

//    浅克隆
    Object* clone(){
        Object *t =  new Resume(*this->work);
        return t;
    }

    void setWorkExperience(string company);
    void setPersonalInfo(string name);
    string getPersonalInfo();
    string getWorkExperience();

    void display();
private:
    WorkExperience *work = nullptr;
    string name;


};



#endif //C___LIST_RESUME_H
