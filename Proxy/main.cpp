#include <iostream>

#include <SchoolGirl.h>
#include <Proxy.h>

using namespace std;

int main()
{
	SchoolGirl *danny = new SchoolGirl();
	danny->SetName("Danny");

	Proxy *proxy = new Proxy(danny);
	proxy->GiveDolls();
	proxy->GiveFlowers();
	proxy->GiveChocolate();

	getchar();
	return 0;
}


