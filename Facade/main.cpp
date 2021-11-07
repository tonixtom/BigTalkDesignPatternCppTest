#include <iostream>

#include <Facade.h>

using namespace std;

int main()
{
	Facade *facade = new Facade();

	facade->MethodA();
	facade->MethodB();
    return 0;
}


