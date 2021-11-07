//
// Created by tom-zlw on 2021/4/12.
//

#ifndef C___LIST_WORKEXPERIENCE_H
#define C___LIST_WORKEXPERIENCE_H
//工作经历
#include  "string"
#include "iostream"
using namespace  std;
class WorkExperience:Object{
public:

    void setcompany(string value){
        company = value;
    }
    string getcompany(){
        return company;
    }
    Object* clone(){
        return new WorkExperience(*this);
    }
private:

    string company;

};

#endif //C___LIST_WORKEXPERIENCE_H
