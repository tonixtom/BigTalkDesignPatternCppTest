#include <iostream>
#include <list>
#include <algorithm>
#include "context.h"
#include "terminalexpression.h"
#include "nonterminalexpression.h"
using namespace std;

int main()
{

    Context *context = new Context();
    std::list<AbstractExpression *> lists;
    lists.push_back(new NonterminalExpression());
    lists.push_back(new TerminalExpression());
    lists.push_back(new NonterminalExpression());
    lists.push_back(new NonterminalExpression());

    for_each (lists.begin(),lists.end(), [context](AbstractExpression *t)
    {
        t->interpret(context);
    });
    return 0;
}