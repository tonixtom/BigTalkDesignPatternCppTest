#include "Visitor.h"
#include <iostream>
#include <string>

void Success::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ����������һ��ΰ���Ů�ˡ�"<<std::endl;
}

void Success::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ����������һ�����ɹ������ˡ�"<<std::endl;
}

void Failing::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ����ͷ�Ⱦƣ�˭Ҳ����Ȱ��"<<std::endl;
}

void Failing::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ������������˭ҲȰ���ˡ�"<<std::endl;
}

void Amativeness::GetManConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ�����²���ҲҪװ����"<<std::endl;
}

void Amativeness::GetWomanConclusion(Person* concreteElementA)
{
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"ʱ�����¶�Ҳװ��������"<<std::endl;
}