// calc.cpp
//

#include "calc.h"

Calc::Calc(int value):_value(value)
{}

int Calc::add(int sum)
{
  _value += sum;
  return _value;
}
