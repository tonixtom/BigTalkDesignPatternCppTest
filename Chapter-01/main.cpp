#include <iostream>
#include "internal/OperationFactory.h"

int main()
{
	Operation *oper;
	oper = OperationFactory::CreateOperate("+");
	oper->SetNumberA(1);
	oper->SetNumberB(2);
	double result = oper->GetResult();
	std::cout << result << std::endl;

	getchar();
}


