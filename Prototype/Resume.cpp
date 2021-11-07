//
// Created by tom-zlw on 2021/4/12.
//

#include "Resume.h"

void Resume::display() {
    cout << "Company: "<<this->getWorkExperience()<<"\tName: "<<getPersonalInfo()<<endl;
}



Resume::Resume(){
    this->work = new WorkExperience();
}


Resume::Resume(WorkExperience work){
this->work = (WorkExperience* )work.clone();
}



void Resume::setWorkExperience(string company){
    work->setcompany(company);
}
void Resume::setPersonalInfo(string name){
    this->name = name;
}
string Resume::getPersonalInfo(){
    return name;
}
string Resume::getWorkExperience(){
    return work->getcompany();
}