#include <iostream>
#include "string"
using namespace  std;

//抽象原型类
class Object{
        public:
        virtual Object* clone() = 0;
};


//工作经历
class WorkExperience{
        public:

        void setcompany(string value){
            company = value;
        }
        string getcompany(){
            return company;
        }
        private:

        string company;

};


//具体类Resume
class Resume : public Object{
        public:

        Resume(int num){
            this->num = num;
            this->work = new WorkExperience();
        }




        Object* clone(){
            return new Resume(*this);
        }

        void display();

        void setWorkExperience(string company){
            work->setcompany(company);
        }
        void setPersonalInfo(string name){
            this->name = name;
        }
        string getPersonalInfo(){
            return name;
        }
        string getWorkExperience(){
            return work->getcompany();
        }
        private:
        WorkExperience *work = nullptr;
        string name;
        int num;

};


void Resume::display() {
    cout <<this->num<<": "<< "Company: "<<this->getWorkExperience()<<"\tName: "<<getPersonalInfo()<<endl;
}



//客户端测试类
int main(void){
    Resume *a,*b;

    a = new Resume(1);
    a->setWorkExperience("Ton");
    a->setPersonalInfo("tom");

    b  = ( Resume* )a->clone();

    b->setWorkExperience("HH");
    b->setPersonalInfo("who");

    a->display();
    b->display();
//
//    //浅克隆比较
//    cout << "Resume == copyResume?" << endl;
//    cout << (a==b) << endl;
//    cout << "Resume.getWorkExperience == copyResume.getWorkExperience?" << endl;
//    cout << (a->getWorkExperience()==b->getWorkExperience()) << endl;
//
//
//    return 0;
}