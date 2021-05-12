#include "Visitor.h"
#include <iostream>
#include <string>

void Success::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，背后多半有一个伟大的女人。"<<std::endl;
}

void Success::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，背后多半有一个不成功的男人。"<<std::endl;
}

void Failing::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，闷头喝酒，谁也不用劝。"<<std::endl;
}

void Failing::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，眼泪汪汪，谁也劝不了。"<<std::endl;
}

void Amativeness::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，凡事不懂也要装懂。"<<std::endl;
}

void Amativeness::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"时，遇事懂也装作不懂。"<<std::endl;
}