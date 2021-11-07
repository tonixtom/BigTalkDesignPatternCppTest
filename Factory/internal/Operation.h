//
// Created by tom-zlw on 2021/4/10.
//

#ifndef INC_08_OPERATION_H
#define INC_08_OPERATION_H
#include "iostream"


class Operation {
public:

    Operation();
    virtual void Oper() = 0;
    virtual double GetResult();

    void SetNumberA(double value);
    double GetNumberA();
    void SetNumberB(double value);
    double GetNumberB();;

protected:
    double m_NumberA;
    double m_NumberB;
};
#endif //INC_08_OPERATION_H

