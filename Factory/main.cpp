#include <iostream>
#include "./internal/Operation.h"
#include "./internal/OperationFactory.h"
#include "./internal/AddFactory.h"
#include "./internal/SubFactory.h"


int main() {
    OperationFactory* OperFactory = new AddFactory();
    Operation* Oper = OperFactory->FactoryMethod();
    Oper->SetNumberA(4);
    Oper->SetNumberB(8);
    double result = Oper->GetResult();
    std::cout<<result<<std::endl;

    OperationFactory* OperFactory1 = new SubFactory();
    Operation* Oper1 = OperFactory1->FactoryMethod();
    Oper1->SetNumberA(8);
    Oper1->SetNumberB(4);
    double result1 = Oper1->GetResult();
    std::cout<<result1<<std::endl;

    return 0;
}