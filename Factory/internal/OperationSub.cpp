#include "OperationSub.h"

OperationSub::OperationSub()
{
    std::cout << "Created Sub operation..." << std::endl;
}

double OperationSub::GetResult()
{
    double result = 0;
    result = m_NumberA - m_NumberB;
    return result;
}