//
// Created by tom-zlw on 2021/4/10.
//

#ifndef INC_08_SUBFACTORY_H
#define INC_08_SUBFACTORY_H
#include "OperationFactory.h"
#include "OperationSub.h"

class SubFactory : public OperationFactory {
public:
    Operation* FactoryMethod() { return new OperationSub(); }
};
#endif //INC_08_SUBFACTORY_H
