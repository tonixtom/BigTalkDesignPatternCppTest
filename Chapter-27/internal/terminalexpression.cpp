#include "terminalexpression.h"
#include <iostream>
using namespace std;

TerminalExpression::TerminalExpression()
{
}

void TerminalExpression::interpret(Context* context)
{
    cout << "Terminal Expression --> context" << endl;
}