
#ifndef INC_08_OPERATIONFACTORY_H
#define INC_08_OPERATIONFACTORY_H
#include "Operation.h"
class OperationFactory{
public:
    virtual Operation* FactoryMethod() = 0;

};
#endif //INC_08_OPERATIONFACTORY_H


