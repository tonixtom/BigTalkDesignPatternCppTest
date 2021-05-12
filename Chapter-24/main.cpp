#include <iostream>
#include <vector>
#include <Handler.h>
#include <ConcreteHandler1.h>
#include <ConcreteHandler2.h>
#include <ConcreteHandler3.h>

using namespace std;

int main()
{
	Handler *h1 = new ConcreteHandler1();
	Handler *h2 = new ConcreteHandler2();
	Handler *h3 = new ConcreteHandler3();
	h1->SetSuccessor(h2);
	h2->SetSuccessor(h3);

	vector<int> requests = { 2,5,14,22,18,3,27,20 };

    for(vector<int>::iterator itor = requests.begin();itor!=requests.end();++itor)
    {
        h1->HandlerRequest(*itor);
    }

	getchar();
}


