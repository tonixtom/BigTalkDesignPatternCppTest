#include "ObjectStructure.h"
#include <iterator>

ObjectStructure::~ObjectStructure()
{
    std::vector<Person* >::iterator it;
    for(it=m_Elements.begin();it!=m_Elements.end();it++)
        delete *it;
}

void ObjectStructure::Attach(Person* element)
{
    m_Elements.push_back(element);
}

void ObjectStructure::Detach(Person* element){}

void ObjectStructure::Display(Action* visitor)
{
    std::vector<Person* >::iterator it;
    for(it=m_Elements.begin();it!=m_Elements.end();it++)
        (*it)->Accept(visitor);
}