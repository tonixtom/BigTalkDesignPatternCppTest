//
// Created by tom-zlw on 2021/4/10.
//

#ifndef INC_08_OPERATIONSUB_H
#define INC_08_OPERATIONSUB_H
#include "Operation.h"
class OperationSub : public Operation {
public:
    OperationSub();
    void Oper() { std::cout << "OperationSub" << std::endl; }
    double GetResult() override;
};
#endif //INC_08_OPERATIONSUB_H
