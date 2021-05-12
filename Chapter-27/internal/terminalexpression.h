#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include "abstractexpression.h"
#include "context.h"

class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression();
    void interpret(Context *context);
};

#endif // TERMINALEXPRESSION_H