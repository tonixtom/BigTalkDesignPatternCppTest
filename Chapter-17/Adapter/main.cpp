#include <iostream>

#include "Adapter.h"

using namespace std;

int main()
{
	Target *target = new Adapter();
	target->Request();

	getchar();
}
