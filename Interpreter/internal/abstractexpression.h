#ifndef ABSTRACTEXPRESSION_H
#define ABSTRACTEXPRESSION_H

#include "context.h"

class AbstractExpression
{
public:
    AbstractExpression();
    void virtual interpret(Context *context)=0;
};

#endif // ABSTRACTEXPRESSION_H