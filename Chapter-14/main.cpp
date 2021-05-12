#include <iostream>

#include <ConcreteSubject.h>
#include <ConcreteObserver.h>

using namespace std;

int main()
{
	ConcreteSubject *s = new ConcreteSubject();

	s->Attach(new ConcreteObserver(s, "X"));
    s->SetSubjectState("GG");
    s->Notify();
	s->Attach(new ConcreteObserver(s, "Y"));
	s->Attach(new ConcreteObserver(s, "Z"));

	s->SetSubjectState("ABC");
	s->Notify();

}


