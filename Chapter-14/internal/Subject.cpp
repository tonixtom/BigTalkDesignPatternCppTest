#include <Subject.h>
#include <algorithm>

void Subject::Attach(Observer *observer)
{
	this->m_Observers.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
	this->m_Observers.remove(observer);
}

void Subject::Notify()
{

    for_each (m_Observers.begin(),m_Observers.end(), [](Observer *observer)
    {
       observer->Update();
    });
}
