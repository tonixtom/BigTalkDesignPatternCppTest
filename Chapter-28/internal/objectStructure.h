#include "Element.h"
#include "Visitor.h"
#include <vector>
#include <string>
#include <iostream>

class ObjectStructure
{
private:
    std::vector<Person*> m_Elements;
public:
    ObjectStructure(){}
    ~ObjectStructure();

    void Attach(Person*);
    void Detach(Person*);
    void Display(Action*);
};