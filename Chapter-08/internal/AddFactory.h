//
// Created by tom-zlw on 2021/4/10.
//

#ifndef INC_08_ADDFACTORY_H
#define INC_08_ADDFACTORY_H
#include "OperationFactory.h"
#include "OperationAdd.h"

class AddFactory : public OperationFactory {
public:
    Operation* FactoryMethod() override { return new OperationAdd(); }
};
#endif //INC_08_ADDFACTORY_H
