#ifndef TWODAY_H
#define TWODAY_H
#include "package.h"
class TwoDayShipping : public Package
{
  
  public:
  TwoDayShipping();
  TwoDayShipping(Person s, Person r, double w, double cpo);
  virtual double calculateCost() const;
  const double package_fee = 10.0;
  virtual ~TwoDayShipping(){}
};
#endif