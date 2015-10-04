//calc.h
//
//

class Calc
{
public:
  Calc(int value);
  virtual ~Calc(){};

  virtual int add(int sum);

private:
  int _value;
};
