//
// Created by tom-zlw on 2021/4/10.
//

#ifndef INC_08_OPERATIONADD_H
#define INC_08_OPERATIONADD_H
#include "Operation.h"
class OperationAdd : public Operation {
public:
    OperationAdd();
    void Oper() { std::cout << "OperationAdd" << std::endl; }
    double GetResult() override;
};
#endif //INC_08_OPERATIONADD_H
