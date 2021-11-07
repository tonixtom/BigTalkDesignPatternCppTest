#include "nonterminalexpression.h"
#include <iostream>
using namespace std;

NonterminalExpression::NonterminalExpression()
{
}

void NonterminalExpression::interpret(Context *context)
{
    cout << "Non-Terminal Expression --> context" << endl;
}