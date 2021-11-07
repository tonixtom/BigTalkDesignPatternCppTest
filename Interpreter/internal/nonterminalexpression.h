#ifndef NONTERMINALEXPRESSION_H
#define NONTERMINALEXPRESSION_H

#include "abstractexpression.h"
#include "context.h"

class NonterminalExpression : public AbstractExpression
{
public:
    NonterminalExpression();
    void interpret(Context *context) override;
};

#endif // NONTERMINALEXPRESSION_H